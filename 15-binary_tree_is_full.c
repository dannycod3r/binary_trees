#include "binary_trees.h"

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
	if ((tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right == NULL))
		return (0);

	/*Recursively check the left and right subtrees*/
	left_is_full = binary_tree_is_full(tree->left);
	right_is_full = binary_tree_is_full(tree->right);

	/*The tree is full only if both the left and right subtrees are full*/
	return (left_is_full && right_is_full);
}
