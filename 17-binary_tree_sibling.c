#include "binary_trees.h"
/**
* binary_tree_sibling - function that finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling node or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);

if (parent->left == node && parent->left != NULL)
return (parent->left);

return (NULL);
}
