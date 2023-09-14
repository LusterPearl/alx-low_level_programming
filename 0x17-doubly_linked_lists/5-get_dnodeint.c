#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A  pointer to he head of the doubly linked list.
 * @index: The index of the node to retrieve
 *
 * Return: The nth noe, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Initialize a counter to keep track of the index */
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		/*move to the next node */
		head = head->next;
		/* increment the count */
		count++;
	}

	return (NULL);
}
