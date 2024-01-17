#include <stdlib.h>
#include "skiplist.h"

/**
 * skiplist_create - Creates a new node for the skip list
 * @n: The value to be stored in the new node
 * @index: The index of the new node
 *
 * Return: A pointer to the new node
 */
skiplist_t *skiplist_create(int n, size_t index)
{
	skiplist_t *new_node = malloc(sizeof(skiplist_t));
	
	if (!new_node)
		return (NULL);
	
	new_node->n = n;
	new_node->index = index;
	new_node->next = NULL;
	new_node->express = NULL;
	
	return (new_node);
}
