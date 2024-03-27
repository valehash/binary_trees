#include "binary_trees.h"
/**
 *binary_tree_postorder - function to traverse a binary tree in postorder
 * @node : the node to be checked
 *Return: returns 1 if it's a leaf node and 0 if not
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t depth; 
  
  depth = 0;
  if (!tree)
  {
    return (0);
  }
  while (tree->parent != NULL){
    
    tree = tree->parent;
    depth++;
  }
  return depth;
}
