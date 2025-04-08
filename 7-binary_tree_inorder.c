#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes trough in binary tree
 * using in-order traversal
 * @tree: pointer to the root nodeof the tree to traverse
 * @func: pointer to the function call of each node
 * Return: func or null if they do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
