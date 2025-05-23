#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent of the node
 * @value: value to store in the new node
 * Return: pointer to new node or Null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	{
		if (parent == NULL)
		return (NULL);
	}
	node = binary_tree_node(parent, value);

		if (parent->right != NULL)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;
	return (node);
}
