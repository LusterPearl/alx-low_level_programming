#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: poointer to the first node in the list
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	/* pointer to the previous node */
	listint_t *prev = NULL;
	/* pointer to the next node */
	listint_t *next = NULL;

	/* loop until current node becomes NULL */
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
