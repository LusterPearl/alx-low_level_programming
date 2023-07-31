#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the number of unique nodes
 * @head: a pointer to the head
 *
 * Return: if the list is not looped - 0
 * otherwise - the number of unique nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	/* pointers for slow and fastvtraversal */
	const listint_t *tortoise, *hare;
	/*counter for the number of unique nodes */
	size_t nodes = 1;

	/* check for an empty list or a list with only one node */
	if (head == NULL || head->next == NULL)
		return (0);
	/* move tortoise on step */
	tortoise = head->next;
	/*move hare two steps */
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			/* count the number of nodes in the loop by movin both totortise and hare */
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

