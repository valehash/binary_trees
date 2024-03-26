#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to add a node to the right of a parent
 * @parent: The pointer to the parent node to add a newnode to
 * @value: The value of the node
 *
 * Return :Returns a pointer to the newnode
 */
void binary_tree_delete(binary_tree_t *tree)
{
  if (tree == NULL)
  {
      return;
  }
  binary_tree_delete(tree->left);
  binary_tree_delete(tree->right);
  free(tree);
}
