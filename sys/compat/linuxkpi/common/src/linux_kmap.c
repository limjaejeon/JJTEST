#include <sys/param.h>
#include <sys/systm.h>
#include <sys/malloc.h>
#include <sys/kernel.h>
#include <sys/sysctl.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/rwlock.h>
#include <sys/proc.h>
#include <sys/sched.h>
#include <sys/sf_buf.h>
#include <sys/queue.h>
#include <vm/uma.h>

#include <linux/page.h>

#ifdef __LP64__

void *
kmap(vm_page_t page)
{
	vm_offset_t daddr;

	daddr = PHYS_TO_DMAP(VM_PAGE_TO_PHYS(page));

	return ((void *)daddr);
}

void *
kmap_atomic_prot(vm_page_t page, pgprot_t prot)
{
	vm_memattr_t attr = pgprot2cachemode(prot);

	sched_pin();
	if (attr != VM_MEMATTR_DEFAULT) {
		vm_page_lock(page);
		page->flags |= PG_FICTITIOUS;
		vm_page_unlock(page);
		pmap_page_set_memattr(page, attr);
	}
	return (kmap(page));
}

void *
kmap_atomic(vm_page_t page)
{

	return (kmap_atomic_prot(page, VM_PROT_ALL));
}

void
kunmap(vm_page_t page)
{

}

void
kunmap_atomic(void *vaddr)
{
	sched_unpin();
}

#else

void kmap_init(void);
void kmap_cleanup(void);

typedef struct kmap_entry_s kmap_entry_t;
struct kmap_entry_s {
    LIST_ENTRY(kmap_entry_s) hash;
    void *va;
    struct sf_buf *sf;
};

static uma_zone_t kmap_zone;
static MALLOC_DEFINE(M_KMAP, "kmap", "kmap hashtable");
static u_long kmap_hash;
/* TODO: bucket lock distribution */
static struct rwlock kmap_hashlock;
static LIST_HEAD(, kmap_entry_s) *kmap_hashtbl;
#define KMAPHASH(pg)  (&kmap_hashtbl[((vm_offset_t)(pg) >> PAGE_SHIFT) & kmap_hash])

void
kmap_init(void)
{
    rw_init(&kmap_hashlock, "kmap rw");
    kmap_hashtbl = hashinit(maxproc / 16, M_KMAP, &kmap_hash);
    kmap_zone = uma_zcreate("KMAP", sizeof(kmap_entry_t), NULL, NULL, NULL,
                            NULL, UMA_ALIGN_PTR|UMA_ZONE_ZINIT, 0);
}

void
kmap_cleanup(void)
{
    hashdestroy(kmap_hashtbl, M_KMAP, kmap_hash);
    rw_destroy(&kmap_hashlock);
    uma_zdestroy(kmap_zone);
}

#define insert_sf(page, sf)         __insert_sf(page, sf, 0)
#define insert_sf_atomic(sf)        __insert_sf((void *)sf_buf_kva(sf), sf, M_NOWAIT)
static bool __insert_sf(void *va, struct sf_buf *sf, int flags)
{
    kmap_entry_t *entry;

    entry = uma_zalloc(kmap_zone, flags);
    if (entry == NULL || va == NULL)
        return false;

    entry->va = va;
    entry->sf = sf;

    rw_wlock(&kmap_hashlock);
    LIST_INSERT_HEAD(KMAPHASH(va), entry, hash);
    rw_wunlock(&kmap_hashlock);

    return true;
}

#define pagetosf(pg)        __find_sf(pg)
#define vtosf(va)           __find_sf(va)
static struct sf_buf * __find_sf(void *va)
{
    kmap_entry_t *iter;
    struct sf_buf *sf;

    rw_wlock(&kmap_hashlock);
    LIST_FOREACH(iter, KMAPHASH(va), hash) {
        if (iter->va == va) {
            sf = iter->sf;
            LIST_REMOVE(iter, hash);
            rw_wunlock(&kmap_hashlock);
            uma_zfree(kmap_zone, iter);
            return sf;
        }
    }
    rw_wunlock(&kmap_hashlock);

    return NULL;
}

void *
kmap(vm_page_t page)
{
    struct sf_buf *sf;

    sf = sf_buf_alloc(page, SFB_NOWAIT/* | SFB_CPUPRIVATE*/);
    if (sf == NULL)
        return NULL; // (-EFAULT);

    if (!insert_sf(page, sf))
        return NULL;

    return (char *)sf_buf_kva(sf);
}

void *
kmap_atomic(vm_page_t page)
{
    struct sf_buf *sf;

    sched_pin();
    sf = sf_buf_alloc(page, SFB_NOWAIT | SFB_CPUPRIVATE);
    if (sf == NULL) {
        sched_unpin();
        return NULL; // (-EFAULT);
    }

    if (!insert_sf_atomic(sf)) {
        sched_unpin();
        return NULL;
    }

    return (char *)sf_buf_kva(sf);
}

void *
kmap_atomic_prot(vm_page_t page, pgprot_t prot)
{
    sched_pin();
    return (pmap_mapdev_attr(VM_PAGE_TO_PHYS(page), PAGE_SIZE, prot));
}

void
kunmap(vm_page_t page)
{
    struct sf_buf *sf;

    if (page == NULL)
        return;

    sf = pagetosf(page);
    if (sf == NULL)
        return;

    sf_buf_free(sf);
}

void
kunmap_atomic(void *vaddr)
{
    struct sf_buf *sf;

    if (vaddr == NULL)
        goto out;

    sf = vtosf(vaddr);
    if (sf == NULL)
        goto out;

    sf_buf_free(sf);

out:
    sched_unpin();
}

#endif
