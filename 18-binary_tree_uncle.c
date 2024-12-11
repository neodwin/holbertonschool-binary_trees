#include "binary_trees.h"

/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: pointer to the node to find the sibling
  * Return: pointer to the sibling
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        if (!node)
                return (NULL);
        if (node->parent && node->parent->left != node)
                return (node->parent->left);
        else if (node->parent && node->parent->right != node)
                return (node->parent->right);
        return (NULL);
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if:
 * - node is NULL
 * - node has no parent
 * - node has no grandparent
 * - node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	/* Uncle is the sibling of the parent */
	return (binary_tree_sibling(node->parent));
}
