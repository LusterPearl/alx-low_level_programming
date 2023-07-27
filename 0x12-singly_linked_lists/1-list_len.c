#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return the number of elements of a list
 * @h: a linkd list
 *
 * Return: the number of elements of a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

