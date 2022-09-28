#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of the binary tree.
 * @tree: pointer to the root node of the tree to measure.
 * Return: Tree size or 0 if NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (tree ? 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right) : 0);
}
