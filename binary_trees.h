#ifndef BIN_TREES_H
#define BIN_TREES_H

/* Standard Library Includes*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Type Definitions */
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Function Prototypes */
/* Print bin tree */
void binary_tree_print(const binary_tree_t *);
/* Add node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* Delete entire bin tree */
void binary_tree_delete(binary_tree_t *tree);
/* Is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

#endif
