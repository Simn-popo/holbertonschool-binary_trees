#include "binary_trees.h"

/**
 * binary_tree_insert left - write function
 * that insert a node as left of another node
 * @parent: pointer to the node
 * @value: value to store in the new node
 * Return: pointer of new node or Null
 */

 binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	{
		if (parent == NULL)
		return(NULL);
	}
	node = binary_tree_node (parent, value);

		if (parent->left != NULL)
	{
		node->left = parent->left;
		node->parent->left = node;
	}
	parent->left = node;
	return (node);
}
