#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: if tree is NULL, return 0
 */

int binary_tree_height(const binary_tree_t *tree)
{
	int left;
	int right;
	int MAX;

	if (tree == NULL)
	return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

return (MAX(left, right) + 1);

}

/**
 * binary_tree_balance - measures height of binary tree
 * @tree: pointer to root node of tree
 * Return: if tree is NUll, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	return (left - right);
}
