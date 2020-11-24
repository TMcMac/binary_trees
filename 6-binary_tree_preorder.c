#include "binary_trees.h"

/**
 * binary_tree_preorder - a function to transverse a binary tree
 * in preorder fasion
 * @tree: a pointer to a root node
 * @func: a function to print the n value of a node
 **/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
