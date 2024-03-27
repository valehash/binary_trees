#include "binary_trees.h"
/**
 *binary_tree_is_leaf - function to check if a node in a tree is a leaf node
 * @node : the node to be checked
 * Return: returns 1 if it's a leaf node and 0 if not
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)){
  const binary_tree_t *current_node;

  if (!tree || !func)
  {
    return;
  }

    current_node = tree;

  func(current_node->n);
  binary_tree_preorder(current_node->left, func);
  binary_tree_preorder(current_node->right, func);
}
