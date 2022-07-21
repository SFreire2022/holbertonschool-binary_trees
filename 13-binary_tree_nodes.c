#include "binary_trees.h"

/**
  * binary_tree_nodes - Recursive function that counts
  * nodes with at least 1 child
  * @tree: Addres of tree to measure
  * Return: Number of nodes with children
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total, nodes_left, nodes_right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);

	total = nodes_left + nodes_right + 1;
	return (total);
}
