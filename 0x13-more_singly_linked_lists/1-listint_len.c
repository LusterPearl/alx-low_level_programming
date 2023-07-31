#include "lists.h"

/**
 * listint_len - counts the number of elemets in the linked list
 * @h: pointer to the head of the linked list (listint_t type) to traverse
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	/* initialize a variable to keep track of the number */
	size_t num = 0;

	/* loop through the linked list */
	while (h)
	{
		/* increment the count */
		num++;

		/* move to the next */
		h = h->next;
	}

	/* return the total number in the linked list */
	return (num);
}
