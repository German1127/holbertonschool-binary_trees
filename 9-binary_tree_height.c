#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 * @tree: pointer to root node
 *
 * Return: if tree is NULL - function returns 0
 *	Else - height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t lhight, rhight;

    if (!tree || (!(tree->lheight) && !(tree->rheight)))
    return (0);

lheight = binary_tree_height(tree->lheight);
lheight = binary_tree_height(tree->rheight);

if (lheight > rheight)
return (lheight + 1);
return (rheight + 1);
}
