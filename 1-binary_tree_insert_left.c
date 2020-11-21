#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function to create a new node and insert
 * the provided value, the new node will be a left insert and the return 
 * value a pointer to the node
 * @parent: a pointer to the parent node
 * @value: an integer value to be inserted in the node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node;

  if (parent == NULL)
    return (NULL);

  new_node = malloc(sizeof(binary_tree_t));  
  if (new_node == NULL)
    return (NULL);

  new_node->parent = parent;
  if (parent->left != NULL)
  {
    new_node->left = parent->left;
    parent->left->parent = new_node;
    parent->left = new_node;
  }
  else
  {
    new_node->left = NULL;
    parent->left = new_node;
  }
  new_node->right = NULL;
  new_node->n = value;

  return (new_node);
}
