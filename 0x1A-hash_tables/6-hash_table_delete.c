#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash tabe
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	unsigned long int i = 0;
	hash_node_t *next, *node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
		}
	}
	free(head->array);
	free(head);
}
