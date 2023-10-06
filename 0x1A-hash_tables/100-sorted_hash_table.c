#include "hash_tables.h"

#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a has table.
 * @size: The size of the array
 *
 * Return: A pointer to the newly created has table
 * or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* Allocated memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initialize the array elements to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;
	return (new_table);
}

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm
 * @str: The input string to be hashed.
 *
 * Return: The has value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}

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

#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	/* Create a new node for the key-value */
	new_node = (key, value);
	if (new_node == NULL)
		return (0);

	/* Add the new node at the beginning */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * create_node - Creates a new hash node.
 * @key: The key
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newnode, or NULL.
 */
static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key i am looking for
 *
 * Return: The value associated with the element, or NULL if can't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key);
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

#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete
 *
 * Return: free
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp,
		}
	}

	free(ht->array);
	free(ht);
}
