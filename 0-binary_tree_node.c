#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: parent/root node
 * @value: int value ffor the node
 * Return: binary_tree_t (new created node) or NULL if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (newnode != NULL)
	{
		newnode->n = value;
		newnode->parent = parent;
		newnode->left = NULL;
		newnode->right = NULL;
		return (newnode);
	}
	return (NULL);
}
