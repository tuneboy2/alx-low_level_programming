#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @prev: points to the previous node
 * @next: points to the next node
 * @n: integer
 *
 * Description: doubly linked list node structure
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
