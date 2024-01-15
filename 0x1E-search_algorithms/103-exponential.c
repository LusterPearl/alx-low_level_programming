#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using exponent
 * @array: Pinter to the first element of the array to search
 * @size: Number of elements in array
 * @value: The value to search
 *
 * Return: The index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	size_t bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Vlaue checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	size_t start = bound / 2;
	size_t end = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	return (binary_search(array, size, value, start, end));
}
/**
 * binary_search - Searches for a value in a sorted arra
 * @array: Pinter to the first element of the array to search
 * @size: Number of element nin array
 * @value: The value to search for
 * @start: The starting index of the range
 * @end: The ending index of the range
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value, size_t start, size_t end)
{
	while (start <= end)
	{
		size_t mid = start + (end - start) / 2;

		printf("Searching in array: %d", array[start]);
		for (size_t i = start + 1; i <= end; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
