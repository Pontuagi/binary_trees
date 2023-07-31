#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tee using in-order
 * traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. Value of the node is
 * passed as parameter to this function
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* process the current node */
	func(tree->n);

	/* traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
