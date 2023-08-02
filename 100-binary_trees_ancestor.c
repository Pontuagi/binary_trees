#include "binary_trees.h"


/**
 * binary_trees_ancestor - function that finds the lowest common ancestor of
 * two nodes
 * @first: Pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor of the two nodes or NULL
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ancestors[100] = {NULL};
	int i, index = 0;
	const binary_tree_t *current = first;

	if (first == NULL || second == NULL)
		return (NULL);

	while (current != NULL)
	{
		ancestors[index++] = (binary_tree_t *)current;
		current = current->parent;
	}

	current = second;
	while (current != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (current == ancestors[i])
				return ((binary_tree_t *)current);
		}

		current = current->parent;
	}

	return (NULL);
}
