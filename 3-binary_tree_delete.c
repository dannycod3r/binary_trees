#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: the root node of binary tree
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*do nothing if root is NULL*/
	if (tree == NULL)
		return;

	/*perform delete action recursively for left and right sub trees*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);

	tree = NULL;
}
