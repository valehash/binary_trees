#include "binary_trees.h"
/**
 *binary_tree_is_leaf - function to check if a node in a tree is a leaf node
 * @node : the node to be checked
 * Return: returns 1 if it's a leaf node and 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node){
  if (!node)
  {
    return (0);
  }
  
  if (node->left == NULL && node->right == NULL ){
    return (1);
  }else
    return (0);
}
