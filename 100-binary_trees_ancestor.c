#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second) {
	if (first == second)
		return ((binary_tree_t *)second);
	if (second->parent == first || first->parent == NULL)
		return ((binary_tree_t *)first);
	if (first->parent == second || second->parent == NULL)
		return ((binary_tree_t *)second);
	while (first->parent != second->parent)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first->parent);
}
