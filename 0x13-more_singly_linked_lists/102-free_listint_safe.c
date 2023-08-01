#include "lists.h"

/**
 * free_listint_safe - Frees a linked list while ensuring safety
 * against double-freeing or accessing freed memory
 * @h: pointer to the first node in the linked list
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	/* counter to keep track of the number of elements freed */
	size_t len = 0;
	/* variable */
	int diff;
	/* temporary pointer to hold the next node address during freeing */
	listint_t *temp;

	/* check if the input pointer is either NULL or points to NULL */
	if (!h || !*h)
		return (0);

	/* iterate through the linked list */
	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			/* temporarily store the address of the next node */
		temp = (*h)->next;

		/* free the current node and update the current node */
		free(*h);
		*h = temp;
		/*increment */
		len++;
	}
	else
	{
		free(*h);
		*h = NULL;
		len++;
		break;
	}
	}
	*h = NULL;
	return (len);
}
