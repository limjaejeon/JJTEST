#ifndef _LINUX_IRQFLAGS_H_
#define _LINUX_IRQFLAGS_H_


static inline void
local_irq_disable(void)
{
	spinlock_enter();
}

static inline void
local_irq_enable(void)
{
	spinlock_exit();
}

#if defined(__i386__) || defined(__amd64__)
static inline unsigned long
local_save_flags(void)
{
#ifdef __LP64__
    return (read_rflags());
#else
    return (read_eflags());
#endif
}

static inline void
local_irq_restore(unsigned long flags __unused)
{
	critical_exit();
}
#else
#error "local_irq functions undefined"
#endif

#define local_irq_save(flags) do {		\
		flags = local_save_flags();	\
		critical_enter();		\
	} while (0)

#endif	/* _LINUX_IRQFLAGS_H_ */
