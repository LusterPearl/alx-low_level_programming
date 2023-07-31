#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked
 * list at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if
 * insertion fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* variable of the index */
	unsigned int i;
	/* pointer to the new node */
	listint_t *new;
	/* pointer to traverse the list */
	listint_t *temp = *head;

	/* allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new || !head)
		/*return null if allocation or pointer is null */
		return (NULL);
	/* set data */
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		/* make the new node point to the current first node */
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			/* move to the next node */
			temp = temp->next;
	}
	return (NULL);
}
