#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - function that measures the height of btree
 * @tree: pointer to the root node
 * Return: the height of btree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/*find height of left subtree*/
	left_height = binary_tree_height(tree->left);

	/*find height of right subtree*/
	right_height = binary_tree_height(tree->right);

	/*return the maximum of them*/
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
