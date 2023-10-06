#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a has table.
 * @ht: The hash table to print.
 *
 * Return: return a new line.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		for (; node != NULL; node = node->next)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
		}
	}
	printf("}\n");
}
