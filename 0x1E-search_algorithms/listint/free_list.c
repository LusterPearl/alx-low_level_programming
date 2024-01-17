#include <stdlib.h>
#include "listint.h"

/**
 * free_list - Frees a singlu linked list
 * @list: Pointer to the head of the list
 */
void free_list(listint_t *list)
{
	listint_t *temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}
