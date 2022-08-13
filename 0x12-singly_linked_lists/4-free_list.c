#include "lists.h"

/**
 * free_list - Frees a list of data tyoe list_t
 * @head: Address of the list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *current = head;

	if (head == NULL)
		return;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
