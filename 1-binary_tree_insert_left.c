#include "binary_trees.h"
/**
  * binary_tree_insert_left - Insert child node at the left
  * @parent: Pointer to parent node
  * @value: Value of the new node
  * Return: Pointer to the new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_l;

	if (!parent)
		return (NULL);
	new_node_l = binary_tree_node(parent, value);
	if (!new_node_l)
		return (NULL);
	if (parent->left == NULL)
		parent->left = new_node_l;
	else
	{
		new_node_l->left = parent->left;
		parent->left->parent = new_node_l;
		parent->left = new_node_l;
	}
	return (new_node_l);
}
