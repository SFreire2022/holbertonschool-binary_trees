#include "binary_trees.h"
#include "10-binary_tree_depth.c"

/**
 * binary_trees_ancestor - Recursive function to get the lowest common
 * ancestor for two given nodes
 * @first: Address of the first node
 * @second: Address of the second node
 * Return: Pointer to the lowest common ancestor node, otherwise NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);
	if (binary_tree_depth(first) > binary_tree_depth(second))
		first = first->parent;
	else
		second = second->parent;
	return (binary_trees_ancestor(first, second));
}
