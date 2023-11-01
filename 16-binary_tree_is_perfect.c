#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node from which to measure, starting at 0
 * Return: levels from root, or 0 if `tree` is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	height_l = binary_tree_height(tree->left) + 1;
	height_r = binary_tree_height(tree->right) + 1;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_is_full - checks if a binary tree is full, meaning all nodes
 * have either 0 or 2 children
 * @tree: root node below which to check
 * Return: 1 if `tree` and all nodes below it each have 0 or 2 children, 0 if
 * not or if `tree` is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return (left && right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect, meaning all
 * nodes except for leaves have two children
 * @tree: root node below which to check
 * Return: 1 if `tree` and all nodes below it each have 2 children, 0 if not or
 * if `tree` is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, full;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	full = binary_tree_is_full(tree);
	return (!(left - right) && full);

}
