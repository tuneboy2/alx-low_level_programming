#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - A function  that adds a new node at the end of a list
 * @head: Address of the Head Node
 * @n: Dat value to be inserted
 *
 * Return: Address of the New element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Failed to Allocate Memory\n");
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = *head;
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		current->next = new;
		new->prev = current;
	}

	return (*head);
}
