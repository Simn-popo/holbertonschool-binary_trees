#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a bnary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor (or 0 if tree is NULL)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);

		if (tree->left == NULL)
			height_left = -1;

		if (tree->right == NULL)
			height_right = -1;
	}

	return (height_left - height_right);
}
