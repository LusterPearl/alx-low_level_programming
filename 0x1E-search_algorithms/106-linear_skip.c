#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorte skip list
 * @list: Pointer to the head of the skip list to search
 * @value: Value to search
 *
 * Return: Pointer to the first node where value is lcated
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list, *prev;

	if (list == NULL)
		return (NULL);

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value || express->next == NULL)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				express->index, express->index + express->express->index);
			break;
		}
		prev = express;
		express = express->express;
	}
	while (prev != NULL && prev->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
