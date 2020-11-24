#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function to determin if
 * binary tree node is a leaf or not
 * @node: a pointer to a node
 * Return: 1 if leaf or 0 if not or if null
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    else if (node->left != NULL || node->right != NULL)
        return (0);
    else
        return (1);
}
