#include "binary_trees.h"


/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: pointer to the node whose uncle is to be determined.
 * Return: pointer to the uncle node if present.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *node_parent = NULL;
	binary_tree_t *uncle = NULL;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	node_parent = node->parent;
	if (node->parent->parent->right != node_parent)
		uncle = node->parent->parent->right;
	else if (node->parent->parent->left != node_parent)
		uncle = node->parent->parent->left;
	return (uncle);
}
