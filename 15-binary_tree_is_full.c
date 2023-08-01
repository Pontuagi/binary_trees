#include "binary_trees.h"


/**
 * is_full_helper - binary tree is full helper
 * @tree: pointer to the node of the tree
 *
 * Return: True or False
 */
bool is_full_helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (true);

	if (tree->left == NULL && tree->right == NULL)
		return (true);
	if (tree->left == NULL || tree->right == NULL)
		return (false);

	return (is_full_helper(tree->left) && is_full_helper(tree->right));
}


/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full_helper(tree));
}
