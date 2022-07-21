#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Address of the node to find the sibling
 * Return: Pointer to the sibling node or NULL if the node or the
 * parent is null or if the node doesn't have sibling.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent && node->parent->left != node)
		return (node->parent->left);
	else if (node->parent && node->parent->right != node)
		return (node->parent->right);
	return (NULL);
}
