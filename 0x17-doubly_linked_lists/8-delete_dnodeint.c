#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Function that deletes the node at index index of
 * a dlistint_t linked list.
 * @head: Address of node
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if Successful, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i, no = -1;

	if (*head == NULL)
		return (no);

	if (index == 0)
	{
		if (current->next == NULL)
		{
			free(current);
			*head = NULL;
			return (no);
		}

		current->next->prev = current->prev;
		*head = current->next;
		free(current);
		no = 1;
	}
	else
	{
		for (i = 0; current; i++)
		{
			if (i == index)
			{
				if (current->next == NULL)
					current->prev->next = NULL;
				else
				{
					current->prev->next = current->next;
					current->next->prev = current->prev;
				}
				free(current);
				no = 1;
			}
			current = current->next;
		}
	}
	return (no);
}
