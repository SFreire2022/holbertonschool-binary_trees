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
/* Is root */
int binary_tree_is_root(const binary_tree_t *node);
/* Preorder traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/*Inorder traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* Postorder traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* Height measure */
size_t binary_tree_height(const binary_tree_t *tree);
/* Depth measure */
size_t binary_tree_depth(const binary_tree_t *tree);
/* Size measure */
size_t binary_tree_size(const binary_tree_t *tree);
/* Number of leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* Number of nodes with at least 1 child */
size_t binary_tree_nodes(const binary_tree_t *tree);
/* Balance Factor */
int binary_tree_balance(const binary_tree_t *tree);
/* Is full */
int binary_tree_is_full(const binary_tree_t *tree);
/* Is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);
/* Sibling of a node */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/* Uncle of a node */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

#endif
