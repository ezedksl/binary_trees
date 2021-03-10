#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree node
 * @parent: parent/root node
 * @value: int value for the node
 * Return: binary_tree_t (new created node) or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->right = NULL;
	new->parent = parent;

	if (new->parent->left == NULL)
	{
		new->parent->left = new;
		new->left = NULL;
	}
	else
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}

	return (new);
}
