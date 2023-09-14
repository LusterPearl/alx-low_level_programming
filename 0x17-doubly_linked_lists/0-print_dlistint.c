#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* Initialize a counter to keep track of nodes */
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		/* move to the next node */
		h = h->next;
		/* Increment the counter */
		count++;
	}

	return (count);
}
