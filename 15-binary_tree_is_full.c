#include "binary_trees.h"

/**
 * full_recursive - checks if a binary tree is full recursively
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if not full, else 1
 */
int full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				full_recursive(tree->left) == 0 ||
				full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or not full, else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (full_recursive(tree));
}
