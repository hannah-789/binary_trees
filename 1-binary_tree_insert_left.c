#include "binary_trees.h"
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @value: The value stored in the node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s {
  int value;
  struct binary_tree_s *left;
  struct binary_tree_s *right;
} binary_tree_t;

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 *
 * @parent: Pointer to the node to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node;

  if (parent == NULL) {
    return (NULL);
  }

  new_node = binary_tree_node(NULL, value);
  if (new_node == NULL) {
    return (NULL);
  }

  /* If parent already has a left child, make the new node its left child */
  if (parent->left != NULL) {
    new_node->left = parent->left;
  }

  parent->left = new_node;

  return (new_node);
}

