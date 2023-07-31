#include "lists.h"

/**
 * add_nodeint - creates a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to be inserted into the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 * to allocate memory
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* creates a new node of type listint_t */
	listint_t *new;

	/* allocate memory for the new node */
	new = malloc(sizeof(listint_t));

	/* check if memory allocation was successful */
	if (!new)
		return (NULL);

	/* assign the provided data to the new node's  'n' field */
	new->n = n;

	/* make the new node point to the current head of the list */
	new->next = *head;

	/*update the head pointer to point to the new node, making it new head */
	*head = new;

	/* return the pointer to the new node */
	return (new);
}
