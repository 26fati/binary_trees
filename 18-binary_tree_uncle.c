#include "binary_trees.h"
#include <stdlib.h>

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

/**
 * binary_tree_uncle - finds 'uncle' to a node, sibling to `node` parent
 * @node: node to check
 * Return: pointer to sibling node of parent to `node`, or NULL if none found
 * or `node` is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node->parent)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}
