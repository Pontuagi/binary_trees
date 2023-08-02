#include "binary_trees.h"


/**
 * binary_tree_rotate_left - Function that performs a left rotation on a binary
 * tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointet to the new root node of the tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	new_root = tree->right;
	tree->right = new_root->left;

	if (new_root->left)
		new_root->left->parent = tree;

	new_root->left = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;

	return (new_root);
}
