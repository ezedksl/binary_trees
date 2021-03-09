#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a new binary tree node
 * @parent: parent/root node
 * @value: int value for the node
 * Return: binary_tree_t (new created node) or NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!parent || !newnode)
		return (NULL);

	newnode->right = NULL;
	newnode->n = value;
	newnode->parent = parent;

	if (parent->right == NULL)
	{
		newnode->right = NULL;
	}
	else
	{
		/* Assign previous child to the right of the new node */
		newnode->right = parent->right;
		/* New parent of the old child will be the new node */
		newnode->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
