#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child of another node
 * @parent: pointer tot the node to insert the left-child in
 * @value: value to be stored in the new node
 *
 * Return: the pointer to the created node or NULL if there is any failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*parent should not be NULL*/
	if (parent == NULL)
		return (NULL);

	/*create node*/
	new_node = binary_tree_node(parent, value);

	/*if creating left node failed*/
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
