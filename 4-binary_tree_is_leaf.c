#include "binary_trees.h"

/**
 * binary_tree_is_leaf - determin is a node is a leaf
 * @node: the current node (a pointer to)
 * Return: 0 for not leaf or 1 for leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
