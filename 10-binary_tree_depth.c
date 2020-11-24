#include "binary_trees.h"


size_t depth_checker(const binary_tree_t *tree);

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to a node in a tree from which
 * we intend to measure depth
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = depth_checker(tree);
	return (depth - 1);
}

/**
 * depth_checker - a function to calculate the
 * depth of a node recusively
 * @tree: node in a binary tree
 * Return: depth
 */
size_t depth_checker(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + depth_checker(tree->parent));
}
