#include "binary_trees.h"
/**
 * binary_tree_node - function to create a binary tree node
 * @parent: The pointer to the parent node to add a newnode to
 * @value: The value of the node
 *
 * Return :Returns a pointer to the newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    
  if (newnode == NULL)
  {
      return NULL;
  }
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->n = value;
  
    return newnode;
}
