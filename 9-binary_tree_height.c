#include "binary_trees.h"

size_t tree_height(const binary_tree_t *tree);


/**
 * binary_tree_height - a function for finding the
 * height of a binary tree
 * @tree: the root to a binary tree
 * Return: the height of a binary tree
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = tree_helper(tree)
	return (size);

}

/**
 * tree_height - recursive function for finding the height
 * of a binary tree
 * @tree: the root to a binary tree
 * Return: the height of a binary tree
 **/

size_t tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	left = (1 + tree_height(tree->left));
	right = (1 + tree_height(tree->right));

	if (left > right)
		return (left);

	return (right);
}
