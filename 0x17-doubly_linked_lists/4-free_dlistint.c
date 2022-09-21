#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A function  that frees a dlistint_t
 * @head: A pointer to the list
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
