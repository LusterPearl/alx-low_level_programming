#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	/* create a pointer to traverse the list */
	dlistint_t *current;

	while (head != NULL)
	{
		/* save the current node */
		current = head;
		/* move to the next node */
		head = head->next;
		/* Free the current node */
		free(current);
	}
}
