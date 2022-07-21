#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: Address of the node to find the uncle.
 * Return: Pointer to the uncle node or NULL if the node or if the node
 * doesn't have uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->right && node->parent->parent->left)
	{
		if (node->parent->parent->right != node->parent)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
