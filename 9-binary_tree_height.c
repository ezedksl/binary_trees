#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree (Preorder)
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node (and prints the value)
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree)
	{
		binary_tree_height(tree->left);
		binary_tree_height(tree->right);
		return (height++);
	}
	return (0);
}
