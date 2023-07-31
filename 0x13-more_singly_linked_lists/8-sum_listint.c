#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the resulting sum of all data in the list
 */
int sum_listint(listint_t *head)
{
	/* variable */
	int sum = 0;
	listint_t *temp = head;

	/* continue looping until the end of the list */
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
