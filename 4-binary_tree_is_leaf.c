#include "binary_trees.h"

/**
  * binary_tree_is_leaf - Verify if node is a leaf
  * @node: Address of node to check
  * Return: 1 if leaf, 0 if not.
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	else
		return (0);
