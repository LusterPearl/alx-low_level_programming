#include "lists.h"

/**
 * pop_listint - Deletes the head node of the linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was deleted or
 * 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	/* temporary pointer to hold the next node */
		listint_t *temp;
		/* variable */
		int num;
		/* check if the list is empty */
		if (!head || !*head)
			return (0);

		num = (*head)->n;
		temp = (*head)->next;
		/*free the memory occupied by the head node */
		free(*head);
		*head = temp;

		/* return the data of the deleted node */
		return (num);
}
