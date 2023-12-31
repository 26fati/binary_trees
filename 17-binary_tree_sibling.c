#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds 'sibling' to a node, sharing the same parent
 * @node: node to check
 * Return: pointer to node sharing same parent as `node`, or NULL if none found
 * or `node` is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (node == parent->left)
		return (parent->right);
	else if (node == parent->right)
		return (parent->left);
	return (NULL);
}
