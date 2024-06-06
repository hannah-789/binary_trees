#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node of the new node.
 * @value: Value to store in the new node.
 * Return: Pointer to the newly created binary tree node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *xin_node; /* Declare xin_node to hold the new node */

    /* Allocate memory for the new node */
    xin_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (xin_node == NULL)
    {
        return NULL;  
    }

    /* Initialize node fields */
    xin_node->n = value;
    xin_node->parent = parent;
    xin_node->left = NULL;
    xin_node->right = NULL;

    return xin_node;
}
