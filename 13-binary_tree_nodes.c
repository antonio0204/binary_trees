#include "binary_trees.h"
/**
 * binary_tree_nodes - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size
 * if tree is NULL --> 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0, child_2 = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (0);

	if (!tree->right || !tree->left)
		return (1);


	child = binary_tree_nodes(tree->left);
	child_2 = binary_tree_nodes(tree->right);

	return (child + child_2 +  1);
}
