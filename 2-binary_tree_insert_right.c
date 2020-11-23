#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function to create a new node and insert
 * the provided value, the new node will be a right insert and the return
 * value a pointer to the node
 * @parent: a pointer to the parent node
 * @value: an integer value to be inserted in the node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node;

  if (parent == NULL)
	return (NULL);

  new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
	return (NULL);

  new_node->parent = parent;
  if (parent->right != NULL)
  {
	new_node->right = parent->right;
	parent->right->parent = new_node;
	parent->right = new_node;
  }
  else
  {
	new_node->right = NULL;
	parent->right = new_node;
  }
  new_node->left = NULL;
  new_node->n = value;

  return (new_node);
}
