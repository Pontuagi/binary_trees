#include "binary_trees.h"


/**
 * binary_tree_sblng - Function to find the sibling of a node
 * @node: pointer to the node to find sibling
 *
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_sblng(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->right == node)
		return (parent->left);

	if (parent->left == node)
		return (parent->right);

	return (NULL);
}


/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointet to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;

	return (binary_tree_sblng(parent));
}
