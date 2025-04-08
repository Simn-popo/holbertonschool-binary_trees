#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_root - function tha checks if 
=======
 * binary_tree_is_root - function tha checks if
>>>>>>> main
 * a given node its a root
 * @node: pointer to the node
 * Return: 1 if the node is a root, 0 if its null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
<<<<<<< HEAD
		return(0);

	if (node->parent == NULL)
			return (1);
		else
			return (0);
=======
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
>>>>>>> main
}
