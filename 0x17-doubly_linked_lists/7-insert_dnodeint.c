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
	unsigned int size = 1, i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = *h;
		new->prev = *h;
		*h = new;
		return (new);
	}
	if (current && idx == 0)
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
	while (current)
	{
		if (current->next == NULL && idx == i)
		{
			new->next = NULL;
			new->prev = current;
			current->next = new;
			return(new);
		}
		if (size == idx)
		{
			new->next = current->next;
			current->next->prev = new;
			current->next = new;
			new->prev = current;
			return (new);
		}
		current = current->next;
		size++;
	}
	return (NULL);
}
