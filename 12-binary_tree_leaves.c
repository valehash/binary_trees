#include "binary_trees.h"
/**
 *binary_tree_postorder - function to traverse a binary tree in postorder
 * @tree: the node to be checked
 *Return: returns 1 if it's a leaf node and 0 if not
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
  size_t count;
  count = 0;
  
  if (!tree)
  {
    return (0);
  }
  
  if (tree->left != NULL)
  {
    count++;
  }
  if (tree->right!= NULL){
    count++; 
  }
  if (tree->left == NULL && tree->right == NULL ){
    count++;
  }
  return (count);
}
