#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list
 * @n: The data for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create a new node */
	dlistint_t *new_node;

	/* check if head is NULL */
	if (head == NULL)
		return (NULL);

	/* allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));

	/* set the data of the new node */
	new_node->n = n;
	/* The new node's previous is NULL */
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	/*set the head to point to the new node */
	*head = new_node;

	return (new_node);
}
