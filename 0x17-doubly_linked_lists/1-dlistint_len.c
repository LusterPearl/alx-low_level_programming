#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elemnts in a dlistint_t list
 * @h: A pointer to the head of the doubly linked list
 *
 * Return: The number of elemnts in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	/* Initilize a counter to keep track of elemts */
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		/* increment the counter */
		count++;
	}

	return (count);
}
