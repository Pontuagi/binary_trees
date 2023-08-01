#include "binary_trees.h"

/**
 * tree_height_helper - Function that helps measures the height of binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */
size_t tree_height_helper(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height_helper(tree->left);
	right_height = tree_height_helper(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}


/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: pointer to the root node of tree to measure height
 *
 * Return: 0 if tree is NULL or height or tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_of_tree;

	if (tree == NULL)
		return (0);

	height_of_tree = tree_height_helper(tree);

	return (height_of_tree - 1);
}
