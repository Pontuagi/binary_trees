#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if the given node is a root
 * @node: the pointer to check
 *
 * Return: 1 if the node is root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return ((node->parent == NULL) ? 1 : 0);
}
