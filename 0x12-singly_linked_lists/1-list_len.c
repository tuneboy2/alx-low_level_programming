#include "lists.h"

/**
 * list_len - Returns the Number of element
 * @h: the pointer to the list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
