#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 * @tree: Tree root node address to check
 * Return: 1 if the tree is perfect, 0 if not.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i, size, height, perfect, pow = 1;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	for (i = 0; i <= height; i++)
		pow *= 2;
	perfect = pow - 1;

	if (size == perfect)
		return (1);
	return (0);
}
