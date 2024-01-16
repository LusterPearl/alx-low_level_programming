#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first eleemt of the array
 * @start: Starting inex to print
 * @end: Ending index to print
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: %d", array[start]);
	for (i = start + 1; i <= end; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Recursiverly searches for a value
 * @array: Pointer to the first element of the arra to search
 * @start: Starting index of the array
 * @end: Ending index of the array
 * @value: The value to searxh for
 *
 * Return: The index where the value is located
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start > end)
		return (-1);

	print_array(array, start, end);

	mid = start + (end - start) / 2;

	if (array[mid] == value && (mid == start || array[mid - 1] < value))
		return (mid);
	if (array[mid] >= value)
		return (advanced_binary_recursive(array, start, mid, value));

	return (advanced_binary_recursive(array, mid + 1, end, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search
 * @size: Number of the element in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
