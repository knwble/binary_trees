#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: A pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t expected_nodes = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);
	expected_nodes = (1 << (height + 1)) - 1;

	return (nodes == expected_nodes);
}
