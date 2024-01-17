#include <stdio.h>
#include "skiplist.h"

/**
 * skiplist_print - Prints the elements of the skip list
 * @list: Pointer to the head of the skip list
 */
void skiplist_print(const skiplist_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}

/**
 * skiplist_free - Frees the memory allocated for the skip list
 * @list: Pointer to the head of the skip list
 */
void skiplist_free(skiplist_t *list)
{
	skiplist_t *temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
