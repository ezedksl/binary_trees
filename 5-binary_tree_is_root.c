#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a binary tree node is the root
 * @node: node to be checked
 * Return: 1 - if the node is the root
 *         0 - not root (or node is NULL)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);
	return (1);
}
