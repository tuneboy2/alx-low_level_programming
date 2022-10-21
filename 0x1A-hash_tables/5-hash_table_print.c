#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	if (!ht)
	{
		printf("{}\n");
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (i == 0)
			printf("{");

		if (!ht->array[i])
			continue;
		else
		{
			while (ht->array[i])
			{
				if (i < ht->size && flag == 1)
					printf(", ");

				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

				ht->array[i] = ht->array[i]->next;
			}

			flag = 1;
		}
	}
	printf("}\n");
}
