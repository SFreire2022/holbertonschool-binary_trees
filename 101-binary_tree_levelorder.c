#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_levelorder - Function that prints data in level-order traversal
 * @tree: Addres of the root of the tree
 * @func: Pointer to a function that executes for each level
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);

	for (i = 1; i <= height; i++)
		print_slevel(tree, i, func);
}

/**
 * print_level - Aux func that prints nodes at the same level
 * @tree: Addres of the root of the tree
 * @level: Level node
 * @func: Pointer to a function that executes for each level
 */
void print_slevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_slevel(tree->left, level - 1, func);
		print_slevel(tree->right, level - 1, func);
	}
}

