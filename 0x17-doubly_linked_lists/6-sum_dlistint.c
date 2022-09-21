#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a list
 * @head: Pointer to the list
 *
 * Return: An Integer
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
