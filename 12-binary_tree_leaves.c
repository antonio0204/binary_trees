#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size
 * if tree is NULL --> 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		leave++;

	leave += binary_tree_leaves(tree->left);
	leave += binary_tree_leaves(tree->right);

	return (leave);
}
