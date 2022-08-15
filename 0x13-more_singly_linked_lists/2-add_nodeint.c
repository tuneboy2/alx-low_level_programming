#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to the list
 * @n: an element to be inserted into the new node
 *
 * Return: a pointer to a data type listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = node;

	*head = new_node;

	return (*head);
}
