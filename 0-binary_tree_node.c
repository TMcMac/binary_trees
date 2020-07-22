#include "binary_trees.h"

/**
 * binary_tree_node - is a simple program to create nodes
 * in a binary tree
 * @parent: is the parent node
 * @value: is the value that will be assigned to our new node
 * Return: a new node we have created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
