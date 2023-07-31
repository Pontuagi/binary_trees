#include "binary_trees.h"


/**
 * binary_tree_insert_right - function that inserts a node a the right child of
 * another node
 * @parent: Pointet to the parent of the child node to insert
 * @value: the value to be stored by the new_node
 *
 * Return: Then new-node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (right_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
