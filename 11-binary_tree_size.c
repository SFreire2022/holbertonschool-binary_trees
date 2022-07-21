#include "binary_trees.h"

/**
  * binary_tree_size - Function that measures the size of a binary tree
  * @tree: Address of tree to measure
  * Return: Size of the tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total, size_left, size_right;

	if (!tree)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	total = size_left + size_right + 1;
	return (total);
}
