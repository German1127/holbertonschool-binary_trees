#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: pointer to root node of tree
 *
 * Return: number of leaves in tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);

size_t left_leaves = binary_tree_leaves(tree->left);
size_t right_leaves = binary_tree_leaves(tree->right);
return (left_leaves + right_leaves);
}
