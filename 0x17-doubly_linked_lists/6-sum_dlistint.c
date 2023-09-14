#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data.
 * @head: A pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data in the list, or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	/* initialize a variable to store the sum of data */
	int sum = 0;

	while (head != NULL)
	{
		/* Add the data of the current node to the sum */
		sum += head->n;
		/* move to the next node */
		head = head->next;
	}

	return (sum);
}
