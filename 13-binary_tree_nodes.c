#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child in a binary tree.
 *
 * @tree - pointer to the root node of the tree to count the number of nodes.
 *
 * Return: number of nodes with atleast one child. If tree is NULL, 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);
	
	/* 1 means root has at least one child */
	if (tree->left || tree->right)
		nodes = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (nodes);
}
