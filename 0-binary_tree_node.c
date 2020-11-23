#include "binary_trees.h"

/**
 * binary_tree_node - a function to create a new node and insert
 * the provided value, then return a pointer to the node
 * @parent: a pointer to the parent node
 * @value: an integer value to be inserted in the node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
