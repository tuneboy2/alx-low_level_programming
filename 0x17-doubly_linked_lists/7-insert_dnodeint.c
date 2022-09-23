#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Function that insert a new node at given position
 * @h: Pointer to the list
 * @idx: Index value of position
 * @n: Data to be inserted in node
 *
 * Return: Head Address
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int size = 0, i;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		new->prev = NULL;
		current->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; current; i++)
		current = current->next;
	current = *h;
	if (idx != 0 && idx < i)
	{
		while (current)
		{
			if (size == idx - 1)
			{
				new->next = current->next;
				current->next->prev = new;
				current->next = new;
				new->prev = current;
				break;
			}
			current = current->next;
			size++;
		}
	return (new);
	}
	return (NULL);
}
