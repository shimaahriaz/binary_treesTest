#include "binary_trees.h"

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @depth: The depth of one leaf in the binary tree.
 * @level: Level of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *tree,
                         size_t depth, size_t level)
{
    if (tree == NULL)
        return (level == depth ? 1 : 0);
    
    if ((tree->left == NULL && tree->right != NULL) || 
        (tree->left != NULL && tree->right == NULL))
        return (0);
    
    return is_perfect_recursive(tree->left, depth, level + 1) &&
           is_perfect_recursive(tree->right, depth, level + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or not perfect, 0.
 *         Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth = 0;
    const binary_tree_t *leaf;

    if (tree == NULL)
        return (0);

    leaf = tree;
    while (leaf->left != NULL) {
        leaf = leaf->left;
        depth++;
    }

    return is_perfect_recursive(tree, depth, 0);
}

