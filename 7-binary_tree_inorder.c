#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - recursively proceeds through a `binary_tree_t`
 * binary tree using in-order traversal
 * @tree: root node of tree to traverse
 * @func: pointer to function to call for each node; value in the node is
 * passed as a parameter to `func`
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
