#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least 1 child in binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: If tree is NULL - return 0
 *  Else - return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodes = 1;

		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
