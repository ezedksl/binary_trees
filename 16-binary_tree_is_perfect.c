#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lcount = 0, rcount = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (tree->left)
		lcount += binary_tree_is_perfect(tree->left);
	if (tree->right)
		rcount += binary_tree_is_perfect(tree->right);
	if ((lcount - rcount) == 0)
		return (1);
	return (0);
}