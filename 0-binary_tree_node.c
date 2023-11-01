#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a new node for binary tree
 * @parent: pointer to the parent node of the created node
 * @value: value to be stored in the new node
 *
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*allocate memory for the node*/
	new_node = malloc(sizeof(binary_tree_t));

	/*if could not create new node*/
	if (new_node == NULL)
		return (NULL);

	/*new node has no children*/
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
