#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree using pre-order
 * @tree: pointer to root node of tree
 * @func: pointer to function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
