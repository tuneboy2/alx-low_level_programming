#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: The list to be printed
 *
 * Return: The Size of the List
 */

size_t print_dlistint(const dlistint_t *h)
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
