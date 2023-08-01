#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the head of the linked list to search for a loop
 *
 * Return: the address of the node where the loop starts, or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	/* slow pointer moving one step at a time */
	listint_t *slow = head;
	/* fast pointer moving two steps at a time */
	listint_t *fast = head;

	/* check if the linked list is empty */
	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			/* return the address of the node where the loop starts */
			return (fast);
		}
	}
	return (NULL);
}
