#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node of struct `binary_tree_t`
 * @parent: pointer to parent of node created
 * @value: integer stored in new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nd;

	n_nd = malloc(sizeof(binary_tree_t));
	if (n_nd == NULL)
		return (NULL);
	n_nd->n = value;
	n_nd->parent = parent;
	n_nd->left = NULL;
	n_nd->right = NULL;
	return (n_nd);
}
