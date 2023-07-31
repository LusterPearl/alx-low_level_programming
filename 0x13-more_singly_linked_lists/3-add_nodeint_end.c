#include "lists.h"

/**
 * add_nodeint_end - appends a new node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to be inserted into the new element
 *
 * Return: pointer to the new node, or NULL if it fails to allocate memory
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create a new node of type listint_t */
	listint_t *new;
	/* create a temporary pointer to traverse the list */
	listint_t *temp = *head;

	/* allocate memory for the new node */
	new = malloc(sizeof(listint_t));

	/* check if memory allocation was successful */
	if (!new)
		return (NULL);

	/* assign the provided data to the new node n field */
	new->n = n;
	/* set the next pointer of the new node to NULL as it will be thwe last */
	new->next = NULL;

	/* if the list is empty, make the new node the first node and return it */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* Traverse the list to find the last node */
	while (temp->next)
		temp = temp->next;

	/* append the new node at the end of the list */
	temp->next = new;

	/* return the pointer to the new node */
	return (new);
}
