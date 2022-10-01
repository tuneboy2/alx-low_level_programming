#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdarg.h>

dlistint_t *_create_dlist(unsigned int n, ...)
{
	va_list args;
	dlistint_t *list;
	dlistint_t *tmp;
	dlistint_t *prev;
	unsigned int i;
	int nb;

	va_start(args, n);
	prev = tmp = list = NULL;
	i = 0;
	while (i < n)
	{
		nb = va_arg(args, int);
		tmp = malloc(sizeof(*tmp));
		if (!tmp)
			return (NULL);
		tmp->n = nb;
		tmp->next = NULL;
		tmp->prev = prev;
		if (!list)
			list = tmp;
		if (prev)
			prev->next = tmp;
		prev = tmp;
		++i;
	}
	va_end(args);
	return (list);
}

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 *
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}*/


int main(void)
{
	dlistint_t *head;
	dlistint_t *node;
	size_t n;

	head = _create_dlist(5, 9, 6, 10, 7, 6);
	node = insert_dnodeint_at_index(&head, 6, 98);
	if (node)
		printf("-> %d\n", node->n);
	else
		printf("(nil)\n");
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	

	free_dlistint(head);
	return (0);
}
