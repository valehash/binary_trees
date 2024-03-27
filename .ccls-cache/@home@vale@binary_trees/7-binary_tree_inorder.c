#include "binary_trees.h"
/**
 *binary_tree_is_leaf - function to check if a node in a tree is a leaf node
 * @node : the node to be checked
 * Return: returns 1 if it's a leaf node and 0 if not
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)){
  if (!tree || !func)
  {
    return;
  }

  func(tree->left->n);
  
  binary_tree_inorder(tree, func);
  binary_tree_inorder(tree->left, func);
  binary_tree_inorder(tree->left, func);
}
