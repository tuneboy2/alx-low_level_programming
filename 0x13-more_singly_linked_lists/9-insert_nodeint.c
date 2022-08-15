#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer to a pointer to the list
 * @idx: index number node should be added to
 * @n: element to be initialized to the new node
 *
 * Return: A pointer to a data type listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head;
	listint_t *new_node;
	unsigned int i;

	/* Handle if Head address is Null but index given is not 0*/
	if (node == NULL && idx != 0)
		return (NULL);

	/* Allocate Memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		free(new_node);
		return (NULL);
	}

	/* Handle if index given != 0 */
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && node != NULL; i++)
		{
			node = node->next;
		}
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = node->next;
		node->next = new_node;
	}

	return (new_node);
}
