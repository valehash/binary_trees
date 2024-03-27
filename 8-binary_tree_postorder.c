#include "binary_trees.h"
/**
 *binary_tree_postorder - function to traverse a binary tree in postorder
 * @node : the node to be checked
 *Return: returns 1 if it's a leaf node and 0 if not
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)){
  if (!tree || !func)
  {
    return;
  }

  

  binary_tree_postorder(tree->left, func); 
  binary_tree_postorder(tree->right, func);
  func(tree->n);
}
