#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the height of a binary tree
 * @tree: root node from which to measure, starting at 0
 * Return: levels from root, or 0 if `tree` is NULL
 */
int binary_tree_height_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree == NULL)
		return (0);
	height_l = binary_tree_height_balance(tree->left) + 1;
	height_r = binary_tree_height_balance(tree->right) + 1;
	return (height_l > height_r ? height_l : height_r);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node from which to measure
 * Return: height of `tree` left subtree minus height of right subtree,
 * or 0 if `tree` is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height_balance(tree->left);
	/*printf("%d\n", left);*/
	right = binary_tree_height_balance(tree->right);
	/*printf("%d\n", right);*/
	return (left - right);
}

