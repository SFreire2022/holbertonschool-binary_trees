#include "binary_trees.h"

/**
 * binary_tree_is_full - Recursive function that checks if
 * binary tree is full
 * @tree: Tree root node address to check
 * Return: 1 on full binary tree, 0 if not
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int right_tree, left_tree;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left && tree->right)
		return (0);
	if (tree->left && !tree->right)
		return (0);
	left_tree = binary_tree_is_full(tree->left);
	right_tree = binary_tree_is_full(tree->right);
	if (right_tree == 1 && left_tree == 1)
		return (1);
	return (0);
}
