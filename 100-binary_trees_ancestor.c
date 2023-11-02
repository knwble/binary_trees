#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	temp = first;
	while (temp)
	{
		const binary_tree_t *temp2 = second;

		while (temp2)
		{
			if (temp2 == temp)
				return ((binary_tree_t *)temp);
			temp2 = temp2->parent;
		}
		temp = temp->parent;
	}
	return (NULL);
}
