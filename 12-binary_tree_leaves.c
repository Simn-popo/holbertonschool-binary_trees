#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves, or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;

	while (tree->left != NULL)
	{
		tree = tree->left;

		if (tree->left == NULL)
		{
			tree = tree->parent;
			
			if (tree->right != NULL)
				tree = tree->right;

			else
				tree = tree->parent;
		}
	}

	return (leaves);
}
