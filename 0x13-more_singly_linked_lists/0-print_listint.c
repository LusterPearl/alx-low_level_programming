#include "lists.h"

/**
 * print_listint - prints the elements of the linked list
 * @h: pointer to the head of the linked list to print
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	/* Initialize a variable to keep track of the number */
	size_t num = 0;

	/* loop through the linked list */
	while (h)
	{
		/* print the value of the current node */
		printf("%d\n", h->n);

		/* Increment the  count */
		num++;

		/* moves to the nex */
		h = h->next;
	}

	/* Return the total number of nodes in the linked list */
	return (num);
}
