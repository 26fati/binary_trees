#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node from which to measure
 * Return: total of `tree` and all nodes below it, or 0 if `tree` is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}
