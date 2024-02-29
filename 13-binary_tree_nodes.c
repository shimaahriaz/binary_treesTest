#include "binary_trees.h"

/**
 * count_nodes_with_children - Recursively counts nodes with at least one child.
 * @node: A pointer to the current node.
 *
 * Return: Number of nodes with at least one child.
 */
size_t count_nodes_with_children(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;

    if (node->left != NULL || node->right != NULL)
        return 1 + count_nodes_with_children(node->left) + count_nodes_with_children(node->right);

    return count_nodes_with_children(node->left) + count_nodes_with_children(node->right);
}

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return count_nodes_with_children(tree);
}

