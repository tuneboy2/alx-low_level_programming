#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list
 *
 * Return: An integer of data type size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}

	return (length);
}
