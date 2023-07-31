#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node in
 * a linked at the specified index
 * @head: pointer to the first node in the list
 * @index: index where the new node is added
 *
 * Return: pointer to the new node,
 * or NULL if insertion fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int
		index)
{
	/* variable of the current index */
	unsigned int i = 0;
	/*pointer to the new inserted node */
	listint_t *current = NULL;
	/* pointer to traverse the list */
	listint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
