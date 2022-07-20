#include "binary_trees.h"

/**
  * binary_tree_inorder - Recursive function to traverse the bin tree inorder
  * @tree: Address of tree to traverse
  * @func: Pointer to a function to be executed for each node.
  * The value of the node have to be passed as a parameter to this function
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
