#include "binary_trees.h"

/**
 * binary_tree_delete - a function to delete a binary tree
 * @tree: a pointer to our root, but then moves down the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* This is our base case */
	if (tree == NULL)
		return;
	/* We will go as far left as we can recursively */
	binary_tree_delete(tree->left);
	/* Anytime we run out of left we check right */
	binary_tree_delete(tree->right);
	/* When there are no left or right left we free */
	free(tree);
}
