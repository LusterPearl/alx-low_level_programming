#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node at the given index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* variable */
	unsigned int i = 0;
	listint_t *temp = head;

	/* traverse the list until the index is reached */
	while (temp && i < index)
	{
		temp = temp->next;
		/* increment the index */
		i++;
	}
	/* return the node at the given index */
	return (temp ? temp : NULL);
}
