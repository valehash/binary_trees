#include "binary_trees.h"
/**
 *binary_tree_postorder - function to traverse a binary tree in postorder
 * @tree : the node to be checked
 *Return: returns 1 if it's a leaf node and 0 if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t height;
  size_t right;
  size_t left;

  const binary_tree_t *current;

  left = 0;
  right = 0;
  current = tree;
  if (!tree)
  {
    return (0);
  }
  while (current->left != NULL){
    
    current = current->left;
    left++;
  }
  while (tree->right != NULL){
    tree = tree->right;
    right++;
  }
  if(left > right){
    height = left;
  }else{
    height = right;
  }
  return height;
}
