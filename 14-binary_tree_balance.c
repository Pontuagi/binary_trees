#include "binary_trees.h"


/**
 * binary_tree_hght - function that measures the height of a tree
 * @tree: node pointer to the root node of tree
 *
 * Return: height of tree
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
 * binary_tree_balance - function that measures the balance factor of a binary
 * tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_hght(tree->left);
	right_height = binary_tree_hght(tree->right);

	return ((int)(left_height - right_height));
}
