#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree using
 *                        pre-order traversal
 * @tree: pointer to the root node of the btree
 * @func: pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*pre-order is Root->Left->Right*/
	/*what is in root*/
	func(tree->n);

	/*what is in left*/
	binary_tree_preorder(tree->left, func);

	/*what is in right*/
	binary_tree_preorder(tree->right, func);

}
