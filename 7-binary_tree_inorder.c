#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree using inorder technique
 * @tree: pointer to the root node of btree to be traversed
 * @func: pointer to the function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*inorder is Left->Root->Right*/
	/*what is at the left child*/
	binary_tree_inorder(tree->left, func);

	/*what is at root*/
	func(tree->n);

	/*what is at right child*/
	binary_tree_inorder(tree->right, func);
}
