#include "binary_trees.h"

/**
  * binary_tree_depth - Function that returns the depth of a binary tree
  * @node: Node to measure the depth from
  * Return: depth of the binary tree
  */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	for (depth = 0; node && node->parent; ++depth)
		node = node->parent;
	return (depth);
}
