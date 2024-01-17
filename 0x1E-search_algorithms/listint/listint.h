#ifndef LISTINT_H
#define LISTINT_H

#include <stddef.h>

/* Structure for the singly linked list node */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Function declarations */
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

#endif /* LISTINT_H */
