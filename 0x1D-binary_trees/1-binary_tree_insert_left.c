#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->left)
	{
		temp = parent->left;
		new->left = temp;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
