/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return binary_tree_height(tree->left) - binary_tree_height(tree->right);
}

/**
 * max - Returns the maximum of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: Maximum of a and b.
 */
int max(int a, int b)
{
	return (a > b ? a : b);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return 1 + max(binary_tree_height(tree->left), binary_tree_height(tree->right));
}

