#include "lists.h"

/**
 * add_node_end - Add a Node to a List
 * @head: Pointer to the first node
 * @str: string to br inserted in thr node
 *
 * Return: A pointer to a data type list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next;
	int length = 0;
	list_t *temp = *head;

	/* Determine the length of str */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the new node */
	next = malloc(sizeof(list_t));
	if (next == NULL)
	{
		printf("Error!");
		free(next);
		return (NULL);
	}

	/* Initialize the data of the new node */
	next->str = strdup(str);
	next->len = length;
	next->next = NULL;

	/* Handle if head pointer is NULL */
	if (*head == NULL)
	{
		*head = next;
		return (*head);
	}

	/* Traverse to the end of list */
	while (temp->next != NULL)
		temp = temp->next;

	/* Initialize last element on list to new node */
	temp->next = next;
	return (*head);
}
