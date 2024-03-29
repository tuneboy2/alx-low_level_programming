#include "lists.h"

/**
 * print_list - Prints all the element in a list_t list
 * @h: the list to be printed
 *
 * Return: Size of elements
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
