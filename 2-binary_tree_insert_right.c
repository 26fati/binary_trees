#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a `binary_tree_t` node as the right-child
 * of another node, or if `parent` "A" already has a right-child "B", then new
 * node "C" takes its place, and the old right-child becomes right-child of new
 * node  ( A-> C-> B )
 * @parent: pointer of node into which right-child is inserted
 * @value: integer stored in new node
 * Return: pointer to new node, or NULL on failure or if `parent` is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nd;

	if (parent == NULL)
		return (NULL);

	n_nd = malloc(sizeof(binary_tree_t));
	if (n_nd == NULL)
		return (NULL);

	n_nd->n = value;
	n_nd->parent = parent;
	n_nd->left = NULL;

	if (parent->right)
	{
		n_nd->right = parent->right;
		parent->right->parent = n_nd;
	}
	else
		n_nd->right = NULL;
	parent->right = n_nd;

	return (n_nd);
}
