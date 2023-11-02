#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree.
 *
 * @tree: a pointer to the node to measure the depth.
 *
 * Return: depth of tree. If tree is NULL, 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if(tree)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
