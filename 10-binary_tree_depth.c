#include "binary_trees.h"

/**
 * binary_tree_depth - function that determins the depth of btree
 * @tree: pointer to the node to measure the depth from
 * Return: depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
