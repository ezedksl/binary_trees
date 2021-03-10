#include "binary_trees.h"

/** binary_tree_sibling- Checks if a node has a sibling
 * @node: node to check if it has a sibling node
 * Return: Pointer to sibling node -or- NULL if has no sibling or @node is nil
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left != node)
	{
		if (!node->parent->right)
			return (NULL);
		return (node->parent->right);
	}
	else
	{
		if (!node->parent->left)
			return (NULL);
		return (node->parent->left);
	}
}
