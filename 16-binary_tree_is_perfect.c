#include "binary_trees.h"
/**
 * binary_tree_balance - measures height of binary tree
 * @tree: pointer to root node of tree
 * Return: if tree is NUll, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left;
	int right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
return (1 + ((left > right) ? left : right));
}

/**
 *binary_tree_is_perfect - checks if the binary tree is perfect
 *@tree:  is a pointer to the root node of the tree to check
 *Return: tree is NULL, return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left;
int right;

if (!tree)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

if (binary_tree_balance(tree) == 0 && left == right)
return (1);

return (0);

}
