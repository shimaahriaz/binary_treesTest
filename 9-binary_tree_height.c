#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @root: A pointer to the root node of the tree to measure the height.
 *
 * Return: If root is NULL, the function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *root)
{
	if (root == NULL)
		return 0;

	size_t left_height = binary_tree_height(root->left);
	size_t right_height = binary_tree_height(root->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

