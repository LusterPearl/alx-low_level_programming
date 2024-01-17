#include <stdio.h>
#include "listint.h"

/**
 * print_list - Prints the elements of a singly linked list
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list != NULL)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
