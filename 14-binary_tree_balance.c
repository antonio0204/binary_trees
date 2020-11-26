#include "binary_trees.h"

/**
 * binary_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height
 * if tree is NULL --> 0
 */
int binary_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	left = binary_height(tree->left);
	right = binary_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor (height of left sub tree - height of right sub tree)
 * if tree is NULL --> 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_height(tree->left);
	right = binary_height(tree->right);
	return (left - right);
}
