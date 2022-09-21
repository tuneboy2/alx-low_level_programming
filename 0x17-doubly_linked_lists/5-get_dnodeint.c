#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Function that returns the nth node of a linked list
 * @head: Pointer to the list
 * @index: Index value of node to be retrieved
 *
 * Return: A pointer to a data type dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	dlistint_t *node;
	unsigned int size = 0;

	while (current != NULL)
	{
		if (size == index)
		{
			node = current;
			return (node);
		}

		current = current->next;
		size++;
	}

	return (NULL);
}
