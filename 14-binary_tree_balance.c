#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor
 * if tree is unbalanced to left, return positive weight value.
 * if tree is unbalanced to right, return negative weight value.
 * if tree is balanced, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (!tree)
		return (0);

	if (tree->left)
		balance_factor = binary_tree_height(tree->left) + 1;
	if (tree->right)
		balance_factor -= binary_tree_height(tree->right) + 1;

	return (balance_factor);
}
