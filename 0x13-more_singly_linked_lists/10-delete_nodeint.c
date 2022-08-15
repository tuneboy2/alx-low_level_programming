#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 * @head: pointer to pointee to the list
 * @index: index position of node to be deleted
 *
 * Return: An integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = *head;

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	node->next = node->next->next;

