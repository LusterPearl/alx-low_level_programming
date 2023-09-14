#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/* create a new node */
	dlistint_t *new_node;
	/* create a temporary pointer to traverse */
	dlistint_t *temp = *head;

	if (head == NULL)
		return (NULL);

	/* allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* set the data of the new node */
	new_node->n = n;
	/* The new nodes's next is NULL */
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	/* set the next of the last node to the new node */
	temp->next = new_node;
	/* set the previous of the new node to the last */
	new_node->prev = temp;

	return (new_node);
}
