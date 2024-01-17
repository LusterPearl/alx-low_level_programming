#include <stdlib.h>
#include "listint.h"

/**
 * create_list - Creates a singly linked list from an array
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created list
 */
listint_t *create_list(int *array, size_t size)
{
	size_t i;

	listint_t *head = NULL, *node = NULL;

	for (i = 0; i < size; i++)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			free_list(head);
			return (NULL);
		}
		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;

		if (node == NULL)
			head = new_node;
		else
			node->next = new_node;

		node = new_node;
	}
	return (head);
}
