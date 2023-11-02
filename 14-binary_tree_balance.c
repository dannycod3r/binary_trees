#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor of btree
 * @tree: pointer to the root node of binary tree
 * Return: balance factor of btree or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}


/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return -1; // Height of an empty tree is -1

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return left_height + 1;
	else
		return right_height + 1;
}
