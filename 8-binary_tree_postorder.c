#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree with post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 * Description: In post-order traversal, we:
 * 1. Traverse the left subtree
 * 2. Traverse the right subtree
 * 3. Visit the current node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
