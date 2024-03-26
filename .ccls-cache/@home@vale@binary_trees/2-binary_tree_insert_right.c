#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to add a node to the right of a parent
 * @parent: The pointer to the parent node to add a newnode to
 * @value: The value of the node
 *
 * Return :Returns a pointer to the newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
  binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

  if (newnode == NULL)
  {
      return NULL;
  }
  if (parent == NULL)
  {
    return NULL;
  }
  newnode->parent = parent;
  newnode->left = NULL;
  newnode->n = value;
  newnode->right = parent->right;
  if(parent->right != NULL)
    {
      parent->right->parent = newnode;
    }
  parent->right = newnode;
  return newnode;
}
