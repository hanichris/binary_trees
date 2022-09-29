#include "binary_trees.h"
#include <stdio.h>

/**
 * bt_height - Measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure.
 * Return: the height of the tree.
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);
	left_height = bt_height(tree->left);
	right_height = bt_height(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the binary tree to measure.
 * Return: the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0;

	if (!tree)
		return (0);
	balance_factor = (int)bt_height(tree->left) - (int)bt_height(tree->right);
	return (balance_factor);
}
