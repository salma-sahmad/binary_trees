#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 *
 * @tree: a pointer to the root node of the tree.
 *
 * Return: size of tree. If tree is NULL, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return size;
