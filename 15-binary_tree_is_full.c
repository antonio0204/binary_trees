#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree:  pointer to the root node of the tree to check
 *
 * Return: 1 if it is a binary tree otherwise 0
 * if tree is NULL --> 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int child, child_2;

	if (!tree)
		return (0);

	if ((!tree->right && tree->left) || (tree->right && !tree->left))
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	child = binary_tree_is_full(tree->left);
	child_2 = binary_tree_is_full(tree->right);
	if (child == 0 || child_2 == 0)
		return (0);
	return (1);
}
