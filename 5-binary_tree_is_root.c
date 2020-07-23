#include "binary_trees.h"

/**
 * binary_tree_is_root - determin is a node is a leaf
 * @node: the current node (a pointer to)
 * Return: 0 for not root or 1 for root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);

	return (0);
}
