#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a bnary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor (or 0 if tree is NULL)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;
