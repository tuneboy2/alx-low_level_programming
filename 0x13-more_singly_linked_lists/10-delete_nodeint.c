#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index of a linked list
 * @head: pointer to pointer to the list
 * @index: index number of node to be deleeted
 *
 * Return: An Integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *prev = *head;
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (i == 0 && index == 0)
		{
			if (*head == NULL)
				return (-1);

			*head = (*head)->next;
			free(node);
		}
		else
		{
			if (i == index && node != NULL)
			{
				prev->next = node->next;
				free(node);
			}
			else
			{
				prev = node;
				if (prev == NULL)
					break;

				node = node->next;
			}
		}
	}

	return (1);
}
