#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: The value to search
 *
 * Return: The first index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i;

	if (array == NULL)
		return (-1);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev < size)
			printf("Value checked array[%lu] = [%d]\n", prev,
				array[prev]);
		else
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		prev - step, prev);
	for (i = prev - step; i < prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
