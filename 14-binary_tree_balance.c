#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Balance factor of the tree, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	return (left_height - right_height);
}
