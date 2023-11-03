#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Perform a right rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 * Return: A pointer to the new root node after the rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
		return (tree);

	binary_tree_t *new_root = tree->left;
	tree->left = new_root->right;
	new_root->right = tree;
	new_root->parent = tree->parent;
	tree->parent = new_root;

	if (tree->left)
		tree->left->parent = tree;

	return (new_root);
}
