#include "binary_trees.h"

/**
 * binary_tree_postorder - a function to transverse a binary tree
 * in postorder fasion
 * @tree: a pointer to a root node
 * @func: a function to print the n value of a node
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
