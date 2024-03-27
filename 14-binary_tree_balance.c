#include "binary_trees.h"


/**
 *max - function to comapare two number
 *@a: The first variable
 *@b: The second variable
 *Return: Returns the greater value
 */

size_t max(int a, int b) {
    return (a > b) ? a : b;
}
/**
 *binary_tree_height - helper height function
 *@tree: The node to find the left_height 
 *Return: returns the height of a node
 */
size_t binary_tree_height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);
    return 1 + max(left_height, right_height);
}
/**
 *binary_tree_balance - function to traverse a binary tree in postorder
 * @tree: the node to be checked
 *Return: returns 1 if it's a leaf node and 0 if not
 */
int binary_tree_balance(const binary_tree_t *tree)
{
  size_t count, right, left;

  count = 0;
  if (!tree)
  {
    return (0);
  }
  left = binary_tree_height(tree->left);
  right =  binary_tree_height(tree->right);

  count = left - right;
  return ((int)count);
}
