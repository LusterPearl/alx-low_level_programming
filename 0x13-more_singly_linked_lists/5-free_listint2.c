#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head
 * pointer to NULL
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	/* create a temporary pointer to traverse the list */
	listint_t *temp;

	/* check if the head pointer is NULL (empty list) */
	if (head == NULL)
		return;

	/* loop through the list to free each node */
	while (*head)
	{
		/* store the next node in the temporary pointer */
		temp = (*head)->next;
		/*free the current node */
		free(*head);
		/* move the hed pointer to the next node */
		*head = temp;
	}
		/* set the head pointer to null to indicate an empty list after freeing */
		*head = NULL;
}
