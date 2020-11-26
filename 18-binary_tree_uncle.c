#include "binary_trees.h"
/**
 * binary_sibling - finds the sibling of a node
 *
 * @node:  pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 * If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 */
binary_tree_t *binary_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->left || !node->parent->right)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node:  pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node)
		return (NULL);

	return (binary_sibling(node->parent));
}
