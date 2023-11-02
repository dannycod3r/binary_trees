#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if a node is leaf node
 * @node: node to be tested
 * Return: 1 if node is leaf else return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*is leaf is when left or right is NULL*/
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
