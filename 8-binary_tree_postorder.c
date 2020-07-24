#include "binary_trees.h"

/**
 * binary_tree_inorder - a short program to print binary tree
 * postorder fashion: left, parent, right.
 * @tree: originally the root node
 * @func: a function to print the n value of the current node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
