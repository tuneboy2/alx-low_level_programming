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
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		count++;
	}

	return (count);
}
