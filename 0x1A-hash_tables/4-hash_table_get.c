#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key i am looking for
 *
 * Return: The value associated with the element, or NULL if can't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	for (; temp != NULL; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}

	return (NULL);
}
