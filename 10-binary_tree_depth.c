#include "binary_trees.h"
/**
 * binary_tree_depth - is a pointer to the node to measure the depth
 * @tree:  is a pointer to the node to measure the depth.
 *
 * Return: depth
 * if tree is NULL --> 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont;

	if (!tree)
		return (0);

	if (!tree->parent)
		return (0);

	cont = binary_tree_depth(tree->parent);
	return (cont + 1);
}
