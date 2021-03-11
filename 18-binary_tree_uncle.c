#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks if a node has an uncle
 * @node: node to check if it has an uncle node
 * Return: Pointer to uncle node -or- NULL if has no uncle or @node is nil
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left != node->parent)
	{
		if (!node->parent->parent->left)
			return (NULL);
		return (node->parent->parent->left);
	}
	else
	{
		if (!node->parent->parent->right)
			return (NULL);
		return (node->parent->parent->right);
	}
}
