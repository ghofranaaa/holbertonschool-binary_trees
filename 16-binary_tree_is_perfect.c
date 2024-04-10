#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect- a function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if tree if NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	return (left_depth == right_depth &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
