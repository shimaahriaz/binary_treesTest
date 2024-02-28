#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: A pointer to the node to measure the depth.
 *
 * Return: If node is NULL, the function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	return ((node && node->parent) ? 1 + binary_tree_depth(node->parent) : 0);
}

