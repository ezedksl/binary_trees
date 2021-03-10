#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree node
 * @parent: parent/root node
 * @value: int value for the node
 * Return: binary_tree_t (new created node) or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);
	newnode->right = NULL;
	newnode->n = value;
	newnode->parent = parent;

	if (parent->left == NULL)
	{
		newnode->left = NULL;
	}
	else
	{
		/* Assign previous child to the left of the new node */
		newnode->left = parent->left;
		/* New parent of the old child will be the new node */
		newnode->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
