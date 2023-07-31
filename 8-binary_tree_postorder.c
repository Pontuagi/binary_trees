#include "binary_trees.h"


/**
 * binary_tree_postorder - function that goes through a binary tee using
 * post_order traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a function to call for each node. Value of the node is
 * passed as parameter
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* process the current node */
	func(tree->n);
}
