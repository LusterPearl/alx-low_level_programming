#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in the has table
 * @key: The key string.
 * @size: The size of the array.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Calculates the hash value using hash_djb2 */
	hash_value = hash_djb2(key);

	/* Use modulo to get the index within the array size */
	return (hash_value % size);
}
