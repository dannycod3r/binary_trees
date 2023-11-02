#include "binary_trees.h"


/**
 * binary_tree_is_perfect - A function that checks if binary tree is perfect.
 * @tree: A pointer to the root of the tree.
 * Return: 1 if binary tree is perfect or 0 in otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_is_full(tree) == 1) &&
	    (binary_tree_balance(tree) == 0))
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - function that checks if btree is full
 * @tree: pointer to the root node of the btree
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full, right_is_full;

	if (tree == NULL)
		return (0);  /*An empty tree is considered not full*/

	/*If a node has only one child, it's not a full binary tree*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*Recursively check the left and right subtrees*/
	left_is_full = binary_tree_is_full(tree->left);
	right_is_full = binary_tree_is_full(tree->right);

	if (tree->left && tree->right)
		return (left_is_full && right_is_full);

	/*The tree is full only if both the left and right subtrees are full*/
	return (0); /**/
}

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
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
