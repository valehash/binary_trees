#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to add a node to the left of a parent
 * @parent: The pointer to the parent node to add a newnode to
 * @value: The value of the node
 *
 * Return :Returns a pointer to the newnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    
  if (newnode == NULL)
  {
      return (NULL);
  }
  if (parent == NULL)
  {
    return (NULL);
  }
    
  newnode->parent = parent;
  newnode->right = NULL;
  newnode->n = value;
  newnode->left = parent->left;
  
  if(parent->left != NULL)
  {
    parent->left->parent = newnode;
  }
  
  parent->left = newnode;
  return (newnode);
}
