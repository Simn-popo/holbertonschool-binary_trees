#include "binary_trees.h"

/**
<<<<<<< HEAD
<<<<<<< Updated upstream
 * binary_tree_is_root - function tha checks if 
=======
 * binary_tree_is_root - function tha checks if
>>>>>>> main
=======
 * binary_tree_is_root - function tha checks if
=======
 * binary_tree_is_root - function tha checks if 
>>>>>>> 0eb369e (1st tap)
>>>>>>> Stashed changes
 * a given node its a root
 * @node: pointer to the node
 * Return: 1 if the node is a root, 0 if its null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
<<<<<<< HEAD
<<<<<<< Updated upstream
		return(0);

	if (node->parent == NULL)
			return (1);
		else
			return (0);
=======
=======
>>>>>>> Stashed changes
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
<<<<<<< Updated upstream
>>>>>>> main
=======
=======
		return(0);

	if (node->parent == NULL)
			return (1);
		else
			return (0);
>>>>>>> 0eb369e (1st tap)
>>>>>>> Stashed changes
}
