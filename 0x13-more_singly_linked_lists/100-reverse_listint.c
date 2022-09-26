#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Function that reverses a listint_t
 * @head: Pointer Address to Head
 *
 * Return: Node to the Reversed List
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (NULL);

	while (current->next != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	current->next = prev;
	*head = current;

	return (*head);
}
