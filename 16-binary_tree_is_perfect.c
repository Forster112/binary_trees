#include <stdio.h>
#include <math.h>
#include "binary_trees.h"

/**
 * binary_tree_height - determines height of a given tree
 * @tree: pointer to tree node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *left = NULL, *right = NULL;
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);

	else
	{
		if (tree->left)
		{
			left = tree->left;
			hl = binary_tree_height(left) + 1;
		}
		else
			hl = 0;
		if (tree->right)
		{
			right = tree->right;
			hr = binary_tree_height(right) + 1;
		}
		else
			hr = 0;
		if (hl < hr)
			return (hr);
		else
			return (hl);
	}
}

/**
 * binary_tree_size - counts number of nodes
 * @tree: tree's root node
 *
 * Return: amount of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *lef = NULL, *righ = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		lef = tree->left;
	if (tree->right)
		righ = tree->right;
	return (binary_tree_size(lef) + 1 + binary_tree_size(righ));
}

/**
 * binary_tree_is_perfect - determines amount if tree is perfect
 * @tree: tree root node
 *
 * Return: 1 if tree is perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, s, i = 0, p = 1;

	h = binary_tree_height(tree);
	s = binary_tree_size(tree);

	while (i < h + 1)
	{
		p *= 2;
		i++;
	}

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if ((p - 1) == s)
		return (1);

	return (0);
}
