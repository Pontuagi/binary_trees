#include "binary_trees.h"


/**
 * is_bst_inorder - function to traverse binary to check if it is a valid BST
 * @tree: pointer to root node of tree
 * @prev: starting value for previous element
 *
 * Return: true if is BST else false
 */
bool is_bst_inorder(const binary_tree_t *tree, int *prev)
{
	if (tree == NULL)
		return (true);

	if (!is_bst_inorder(tree->left, prev))
		return (false);

	if (*prev >= tree->n)
		return (false);
	*prev = tree->n;

	return (is_bst_inorder(tree->right, prev));
}


/**
 * binary_tree_is_bst - function that checks if a binary tree is a valid binary
 * search tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if tree is valid BST else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev = INT_MIN;

	if (tree == NULL)
		return (0);
	if (is_bst_inorder(tree, &prev))
		return (1);
	else
		return (0);
}
