#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list
 * @head: the pointer to the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
