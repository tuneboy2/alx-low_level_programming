#include "lists.h"

/**
 * add_node - adds a new node to the beginning of the list
 * @head: the address of the head pointer
 * @str: the string to be copied to the node
 *
 * Return: A pointer to a data type list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *next;
	int length = 0;

	while (str[length] != '\0')
		length++;

	next = malloc(sizeof(list_t));
	if (next == NULL)
	{
		printf("Error!");
		free(next);
		return (NULL);
	}

	next->str = strdup(str);
	next->len = length;
	next->next = *head;

	*head = next;
	return (*head);
}
