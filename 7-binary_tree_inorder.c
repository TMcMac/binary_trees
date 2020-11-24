#include "binary_trees.h"

/**
 * binary_tree_inorder - a function to transverse a binary tree
 * in inorder fasion
 * @tree: a pointer to a root node
 * @func: a function to print the n value of a node
 **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
