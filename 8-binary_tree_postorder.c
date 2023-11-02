#include "binary_trees.h"

/**
 * binary_tree_postorder - function to traverse btree using postorder technique
 * @tree: pointer to root node of btree
 * @func: pointer to the function to call on each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*post order is Left->Right->Root*/
	/*Left*/
	binary_tree_postorder(tree->left, func);

	/*Right*/
	binary_tree_postorder(tree->right, func);

	/*Root*/
	func(tree->n);
}
