#include "binary_trees.h"


/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: pointer to the node whose sibling is to be determined.
 * Return: pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right != node)
		sibling = node->parent->right;
	else if (node->parent->left != node)
		sibling = node->parent->left;
	return (sibling);
}
