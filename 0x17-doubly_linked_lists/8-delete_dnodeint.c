#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to delete
 *
 * Return: 1 if it succeeded
 * -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		/* update the head to the next node */
		*head = current->next;
		if (*head != NULL)
			/* update the previous of the new node */
			(*head)->prev = NULL;
		/*free the deleted node */
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	/*store the previous node */
	temp = current->prev;
	/*update the next of the previous node */
	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	/*free the deleted node */
	free(current);

	return (1);
}

