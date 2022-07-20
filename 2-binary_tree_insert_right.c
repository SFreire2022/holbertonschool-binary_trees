#include "binary_trees.h"
/**
  * binary_tree_insert_right - Insert child node at the right
  * @parent: Pointer to parent node
  * @value: Value of the new node
  * Return: Pointer to the new node
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_r;

	if (!parent)
		return (NULL);
	new_node_r = binary_tree_node(parent, value);
	if (!new_node_r)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new_node_r;
	else
	{
		new_node_r->right = parent->right;
		parent->right->parent = new_node_r;
		parent->right = new_node_r;
	}
	return (new_node_r);
}
