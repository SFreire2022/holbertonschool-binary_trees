#include "binary_trees.h"

/**
  * binary_tree_postorder - Recursive function to traverse the bin tree
  * in postorder traverse
  * @tree: Address of tree to traverse
  * @func: Pointer to a function to be executed for each node.
  * The value of the node have to be passed as a parameter to this function
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
