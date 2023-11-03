#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current, *new_node;

	if (tree != NULL)
	{
		current = *tree;

		if (current == NULL)
		{
			new_node = binary_tree_node(current, value);
			if (new_node == NULL)
				return (NULL);
			return (*tree = new_node);
		}
		if (value < current->n) /* Insert in the left subtree */
		{
			if (current->left != NULL)
				return (bst_insert(&current->left, value));

			new_node = binary_tree_node(current, value);
			if (new_node == NULL)
				return (NULL);
			return (current->left = new_node);
		}
		if (value > current->n) /* Insert in the right subtree */
		{
			if (current->right != NULL)
				return (bst_insert(&current->right, value));

			new_node = binary_tree_node(current, value);
			if (new_node == NULL)
				return (NULL);
			return (current->right = new_node);
		}
	}
	return (NULL);
}
