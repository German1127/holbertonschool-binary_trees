#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 * @tree: pointer to root node
 *
 * Return: if tree is NULL - function returns 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t lefth;
	size_t righth;


	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		lefth = binary_tree_height(tree->left) + 1;
		righth = binary_tree_height(tree->right) + 1;

		if (lefth > righth)
			return (lefth);
		else
			return (righth);
	}
}
