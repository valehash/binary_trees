#include "binary_trees.h"
/**
 *binary_tree_is_root - function to check if a node is the root node or not
 * @node:The node being checked
 * Return -Returns 1 if it is the root node and 0 if it isn't
 */

int binary_tree_is_root(const binary_tree_t *node)
{
  if (!node){
    return (0);
  }
  if (node->parent == NULL){
    return (1);
  }else
    return (0);
}
