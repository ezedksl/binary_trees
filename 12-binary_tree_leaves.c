#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a binary trees
 * @tree: Root node of the tree
 * Return: Count of leaves -or- 0 if root NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (count + 1);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
