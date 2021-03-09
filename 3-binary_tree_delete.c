#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a whole binary tree (recursively)
 * @tree: root node of the binary tree to be deleted
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
