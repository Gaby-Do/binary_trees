#include "binary_trees.h"

void print_level(const binary_tree_t *tree, int level, void (*func)(int));

/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int t_height = 0;
	int level = 0;

	if (tree == NULL || func == NULL)
		return;
	t_height = binary_tree_height(tree);
	for (level = 1; level <= t_height + 1; level++)
		print_level(tree, level, func);
}


/**
 * print_level - prints a level of a binary tree from left to right
 * @tree: pointer to first node of level
 * @level: level of the tree to print
 * @func: prints the node
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 1)
		func(tree->n);
	else
	{
		if (level > 1)
		{
			print_level(tree->left, level - 1, func);
			print_level(tree->right, level - 1, func);
		}
	}
}

#include "binary_trees.h"

/**
 *binary_tree_height -measures height of tree
 *@tree: pointer to the root node
 *Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r;
	size_t height_l;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
