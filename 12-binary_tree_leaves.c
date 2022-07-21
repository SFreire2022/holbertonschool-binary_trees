#include "binary_trees.h"

/**
 * binary_tree_leaves - Recursive function that
 * counts leaves in binary tree
 * @tree: Address to the root node of the tree
 * Return: Number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total, left_leaves, right_leaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	total = left_leaves + right_leaves;
	return (total);
}
