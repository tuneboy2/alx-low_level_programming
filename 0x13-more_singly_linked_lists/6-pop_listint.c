#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list, and
 * return the head's node data(n)
 * @head: pointer to a pointer to the list
 *
 * Return: An integer
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int temp;

	if (*head == NULL)
		return (0);

	temp = node->n;
	*head = node->next;

	free(node);

	return (temp);
}
