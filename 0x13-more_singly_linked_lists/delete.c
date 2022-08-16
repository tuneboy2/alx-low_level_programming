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
	listint_t *prev = *head;
	listint_t *temp = *head;

	for (; i <= index; i++)
	{
		if (i == 0 && index == 0)
		{
			if (*head == NULL)
				return (-1);

			*head = (*head)->next;	
			free(temp);
		
		}
		else
		{
			if (i == index && temp)
			{
				prev->next = temp->next;
				free(temp);
			}
			else
			{
				prev = temp;
				if (prev == NULL) 
					break;
				temp = temp->next;
			}
		}
	}
return (1);
}
