#include "binary_trees.h"

/**
 * binary_tree_size - function that mesure the size of a node
 * in a binary tree
 * @tree: pointer of the node to measure the depth
 * Return: 0 if the tree i NULL 
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return(1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
