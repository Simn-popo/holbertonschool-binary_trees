#include "binary_trees.h"

/**
 * binary_tree_node - create a new node
 * @parent: pointeur of node
 * @value: value of the new node
 * Return: return pointer of new node or null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	binary_tree_t *new;

	if (new_node == NULL)

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	free(new);
	return (new_node);
}
