#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * create_list - Creates a singly linked list from an array
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created list
 */
listint_t *create_list(int *array, size_t size)
{
	size_t i;

	listint_t *head = NULL, *node = NULL;

	for (i = 0; i < size; i++)
	{
		listint_t *new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			free_list(head);
			return (NULL);
		}
		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;

		if (node == NULL)
			head = new_node;
		else
			node->next = new_node;

		node = new_node;
	}
	return (head);
}

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
	size_t step = sqrt(size);
	size_t prev = 0;

	if (list == NULL)
		return (NULL);

	while (list->next != NULL && list->n < value)
	{
		if (list->index >= prev)
		{
			printf("Value checked at index [%lu] = [%d]\n",
				list->index, list->n);
			prev += step;
		if (prev >= size)
			break;
		}
		list = list->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		list->index - step, list->index);
	while (list != NULL && list->index >= list->index - step)
	{
		printf("Value checked at index {%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);

		list = list->next;
	}
	return (NULL);
}
