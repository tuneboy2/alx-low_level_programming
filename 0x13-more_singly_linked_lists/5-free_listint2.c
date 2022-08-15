#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list
 * @head : a pointer to a pointer to the list
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *node = *head;
	listint_t *current;

	if (head != NULL)
	{
		while ((current = node) != NULL)
		{
			node = node->next;
			free(current);
		}

		*head = NULL;
	}
}
