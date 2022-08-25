#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance
 *
 * Return: 0 if tree is NULL, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of thetree to measure
 *
 * Return: 0 if tree is NULL, else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, righ = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		righ = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lef > righ) ? lef : righ);
	}
	return (0);
}
