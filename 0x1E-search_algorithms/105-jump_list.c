#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list jump search
 * @list: Pointer to the head of the list
 * @size: Number of nodes to the list
 * @value: Value to search for
 *
 * Return: Pointer t the first  node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev, i;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	prev = 0;

	while (list && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index,
			list->n);
		prev = list->index;
		for (i = 0; list && i < step; ++i)
			list = list->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev,
		list ? list->index : size - 1);
	list = list ? list : NULL;

	for (; prev <= (list ? list->index : size - 1); ++prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev,
			list ? list->n : 0);
		if (list && list->n == value)
			return (list);

		list = list ? list->next : NULL;
	}
	return (NULL);
}
