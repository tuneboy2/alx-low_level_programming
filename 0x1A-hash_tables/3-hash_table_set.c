#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: key element to be added
 * @value: value element to be added
 *
 * Return: 1 if Successful, 0 othrrwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_cpy;
	hash_node_t *current, *new_node;

	if (!ht || !key || !value || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	if (!value_cpy)
		return (0);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			current->value = value_cpy;
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free (value_cpy);
		return (0);
	}

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(value_cpy);
		free(new_node);
		return (0);
	}

	new_node->value = value_cpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
