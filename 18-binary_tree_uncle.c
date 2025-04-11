#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds
 * the uncle of the node
 * @node: pointer to the node to find the uncle
 * Return: NULL
 */
binary_tree_t binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent)
		return (NULL);
	if (node->parent->left == node->parent)
		return (node->parent->parent->right);
		return (node->parent->parent->left);
}
