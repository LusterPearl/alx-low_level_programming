#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * create_skiplist - Create a skiplist from an array
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: A pointer to the head of the created created skiplist
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *head = NULL, *node = NULL, *express = NULL;
	size_t express_step = sqrt(size);
	size_t express_index = express_step - 1;
	size_t i;

	for (i = 0; i < size; i++)
	{
		skiplist_t *new_node = malloc(sizeof(skiplist_t));
		if (new_node == NULL)
		{
			free_skiplist(head);
			return (NULL);
		}

		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;

		if (i == 0)
			head = new_node;

		if (i == express_index || i == size - 1)
		{
			if (express != NULL)
			{
				express->express = new_node;
				express = NULL;
			}
			express_index += express_step;
		}
		else if (express == NULL)
		{
			express = new_node;
		}
		if (node != NULL)
			node->next = new_node;

		node = new_node;
	}
	return (head);
}

/**
 * print_skiplist - Prints the elements of a skiplist
 * @list: Pointer to the head of the skiplist
 */
void print_skiplist(const skiplist_t *list)
{
	printf("List :\n");
	while (list != NULL)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\nExpress lane :\n");
	while (list != NULL)
	{
		printf("Lindex[%lu] = [%d]\n", list->index, list->n);
		list = list->express;
	}
	printf("\n");
}

/**
 * free_skiplist - Fress a skiplist
 * @list: Pointer to the head of the skiplist
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}

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
