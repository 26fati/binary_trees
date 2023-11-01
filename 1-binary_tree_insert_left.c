#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a `binary_tree_t` node as the left-child
 * of another node, or if `parent` "A" already has a left-child "B", then new
 * node "C" takes its place, and the old left-child becomes left-child of new
 * node  ( B <-C <-A )
 * @parent: pointer of node into which left-child is inserted
 * @value: integer stored in new node
 * Return: pointer to new node, or NULL on failure or if `parent` is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nd;

	if (parent == NULL)
		return (NULL);

	n_nd = malloc(sizeof(binary_tree_t));
	if (n_nd == NULL)
		return (NULL);
	n_nd->n = value;
	n_nd->parent = parent;
	n_nd->right = NULL;
	if (parent->left)
	{
		n_nd->left = parent->left;
		parent->left->parent = n_nd;
	}
	else
		n_nd->left = NULL;
	parent->left = n_nd;

	return (n_nd);
}
