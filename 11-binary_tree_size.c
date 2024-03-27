#include "binary_trees.h"
/**
 *binary_tree_postorder - function to traverse a binary tree in postorder
 * @node : the node to be checked
 *Return: returns 1 if it's a leaf node and 0 if not
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
  if (!tree)
  {
    return (0);
  }
  if (tree->left == NULL && tree->right ==NULL)
  {
    return (1);
  }
  return(1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
