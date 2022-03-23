#include "binary_trees.h"
/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: is a pointer to the root node of the tree to check
 *
 *Return: 1 if is perfect (exactly two child), else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);

	return (0);
}
/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *@tree: is a pointer to the root node of the tree to check
 *Return: 1 if is full, else 0. When tree is NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: is a pointer to the root node of the tree
 *
 *Return: if tree is NULL return 0, else return balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (1);
}

/**
 *binary_tree_height -measures height of tree
 *@tree: pointer to the root node
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r = 0;
	size_t height_l = 0;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (height_l > height_r ? height_l : height_r);
}
