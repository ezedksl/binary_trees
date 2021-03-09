#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);
	if (lHeight > rHeight)
		return (lHeight + 1);
	else
		return (rHeight + 1);
}
