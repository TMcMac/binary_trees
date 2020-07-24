#include "binary_trees.h"

/**
 * binary_tree_preorder - a function to transverse the binary tree
 * in pre-order fashion
 * @tree: origninally a pointer to the root node
 * @func: a function to print the current node's n value
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
