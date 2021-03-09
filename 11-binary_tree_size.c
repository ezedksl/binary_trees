#include "binary_trees.h"

/**
 * binary_tree_size - Counts the total number of nodes of a binary tree
 * @tree: Root node of the binary tree
 * Return: Size of the tree || 0 if @tree NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		count += binary_tree_size(tree->left);
	if (tree->right)
		count += binary_tree_size(tree->right);
	return (count + 1);
}
