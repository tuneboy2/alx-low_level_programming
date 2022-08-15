#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the linked list
 *
 * Return: An integer of data type size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}

	return (length);
}
