#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a given binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor -or- 0 if @tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	lHeight = binary_tree_balance(tree->left);
	rHeight = binary_tree_balance(tree->right);
	if (tree->left)
		lHeight++;
	if (tree->right)
		rHeight++;
	return (lHeight - rHeight);
}
