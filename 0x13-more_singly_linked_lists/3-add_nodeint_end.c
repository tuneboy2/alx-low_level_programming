#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: a pointer to the list
 * @n: element to be added in the new node
 *
 * Return: a pointer to a data type listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	/* Initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* Handle if head pointer is NULL */
	if (*head == NULL)
	{
	       *head = new_node;
	       return (*head);
	}

	/* Traverse to the end of the list */
	while (node->next != NULL)
		node = node->next;

	/* Initialize last element on list to new node */
	node->next = new_node;

	return (*head);
}

