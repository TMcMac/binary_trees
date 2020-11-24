#include "binary_trees.h"

/**
 * binary_tree_is_root - a function to determin if
 * binary tree node is the root node
 * @node: a pointer to a node
 * Return: 1 if root or 0 if not or if null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL || node->parent != NULL)
        return (0);
    else
        return (1);
}
