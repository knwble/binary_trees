#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: A pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height, result;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Check if the tree is balanced and the left and right */
	/* subtrees are perfect */
	if (left_height == right_height)
	{
		result = (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
		return (result);
	}
	/* tree is not perfect if heights are not equal */
	return (0);
}
