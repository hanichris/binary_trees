#include "binary_trees.h"


/**
 * bt_size - measure the size of the binary tree.
 * @tree: pointer to the root node of the tree to measure.
 * Return: Tree size or 0 if NULL.
 */
size_t bt_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + bt_size(tree->left) + bt_size(tree->right));
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: Either 0 or 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes = (int)bt_size(tree);

	return (nodes != 0 && ((nodes & (nodes + 1)) == 0));
}
