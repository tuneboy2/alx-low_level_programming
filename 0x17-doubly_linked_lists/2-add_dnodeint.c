#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint - A function that adds a new node at the beginning of a list.
 * @head: Pointer to the Head Address
 * @n: Value to be inserted in the new node
 *
 * Return: Address of New Head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Failed to Allocate Memory\n");
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		h->prev = new;

	*head = new;

	return (*head);
}
