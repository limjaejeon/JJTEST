#ifndef _LINUX_INTERVAL_TREE_H
#define _LINUX_INTERVAL_TREE_H

#include <linux/rbtree.h>

struct interval_tree_node {
	union {
		RB_ENTRY(interval_tree_node) rb_entry;
		struct rb_node rb;
	};
	unsigned long long start;	/* Start of interval */
	unsigned long long last;	/* Last location _in_ interval */
	unsigned long long __subtree_last;
	unsigned long long it_magic;
};

extern void
interval_tree_insert(struct interval_tree_node *node, struct rb_root *root);

extern void
interval_tree_remove(struct interval_tree_node *node, struct rb_root *root);

extern struct interval_tree_node *
interval_tree_iter_first(struct rb_root *root,
			 unsigned long long start, unsigned long long last);

extern struct interval_tree_node *
interval_tree_iter_next(struct interval_tree_node *node,
			unsigned long long start, unsigned long long last);

#endif
