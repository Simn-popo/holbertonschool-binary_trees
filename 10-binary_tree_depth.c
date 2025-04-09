#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a bianry tree
 * @tree: pointer to node to measure th depth
 * Return: number of nodes between root and tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int i = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != 0)
	{
		i++;
		tree = tree->parent;
	}

	return (i);
}
