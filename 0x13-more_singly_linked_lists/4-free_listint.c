#include "lists.h"

/**
 * free_listint - frees a linked list of type listint_t
 * @head: pointer to the head of the list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/*loop through the list until head becomes NULL */
	while (head)
	{
		temp = head->next;

		/*free the current node */
		free(head);
		head = temp;
	}
}
