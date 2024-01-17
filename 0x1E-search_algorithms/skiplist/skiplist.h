#ifndef SKIPLIST_H
#define SKIPLIST_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *skiplist_create(int n, size_t index);
void skiplist_print(const skiplist_t *list);
void skiplist_free(skiplist_t *list);
skiplist_t *linear_skip(skiplist_t *list, int value);
#endif /* SKIPLIST_H */

