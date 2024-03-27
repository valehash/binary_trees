#include "binary_trees.h"
/**
 *binary_tree_is_full - function to chekc if a node has 0 or 2 children
 * @tree: the node to be checked
 *Return: returns 1 if it's a leaf node and 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
  if (!tree)
  {
    return (0);
  }
  if (tree->left == NULL && tree->right == NULL)
  {
    return (1);
  }
  else if(tree->left != NULL && tree->right != NULL)
  {
    return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
  }
  else
  {
    return (0);
  }
}
