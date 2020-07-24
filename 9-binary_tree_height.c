#include "binary_trees.h"
size_t max_depth(const binary_tree_t *tree);

/**
 * binary_tree_height - find the height of the tree using max_depth
 * @tree: a pointer originally to the head parent node
 * Return: the height of the tree not counting parent
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = max_depth(tree);

	return (height - 1);
}

/**
 * max_depth - find the logest (deepest) branch in the tree
 * @tree: originally a pointer to the parent node
 * Return: the depth of the longest branch in the tree
 */

size_t max_depth(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = max_depth(tree->left);
	right = max_depth(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
