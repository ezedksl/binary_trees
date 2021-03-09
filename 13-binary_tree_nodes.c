#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes of a binary trees
 * @tree: Root node of the tree
 * Return: Count of nodes -or- 0 if root NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (nodes + 1);
	return (nodes);
}
