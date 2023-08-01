#include "binary_trees.h"


/**
 * binary_tree_hght - function to calculate the height of binary tree
 * @tree: pointer to node of the tree
 *
 * Return: the height of the tree
 */
size_t binary_tree_hght(const binary_tree_t *tree)
{
	size_t left_hght, right_hght;

	if (tree == NULL)
		return (0);

	left_hght = binary_tree_hght(tree->left);
	right_hght = binary_tree_hght(tree->right);

	return ((left_hght > right_hght) ? (left_hght + 1) : (right_hght + 1));
}


/**
 * binary_tree_full - function to check if a binary tree is full
 * @tree: pointer to the root node of tree
 *
 * Return: true if full else false
 */
bool binary_tree_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (false);

	if (tree->left == NULL && tree->right == NULL)
		return (true);

	if (tree->left == NULL || tree->right == NULL)
		return (false);

	return (binary_tree_full(tree->left) && binary_tree_full(tree->right));
}


/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	bool is_full;
	size_t left_hght, right_hght;

	if (tree == NULL)
		return (0);
	is_full = binary_tree_full(tree);

	if (!is_full)
		return (0);

	left_hght = binary_tree_hght(tree->left);
	right_hght = binary_tree_hght(tree->right);

	if (left_hght == right_hght)
		return (1);
	else
		return (0);
}
