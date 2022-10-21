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
	int ret = 0;
	unsigned long int index;
	char *value_cpy, *key_cpy;
	hash_node_t *prev_node;

	if (!ht || !key || !value || key[0] == '\0')
		return (ret);

	index = key_index((const unsigned char *)key, ht->size);
	value_cpy = malloc(sizeof(char *));
	if (!value_cpy)
		return (ret);
	strcpy(value_cpy, value);

	key_cpy = malloc(sizeof(char *));
	if (!key_cpy)
		return (ret);
	strcpy(key_cpy, key);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (!ht->array[index])
			return (ret);
		ht->array[index]->key = key_cpy;
		ht->array[index]->value = value_cpy;
		ht->array[index]->next = NULL;
	}
	else
	{
		prev_node = ht->array[index];
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (!ht->array[index])
			return (ret);
		ht->array[index]->key = key_cpy;
		ht->array[index]->value = value_cpy;
		ht->array[index]->next = prev_node;
	}
	ret = 1;
	return (ret);
}
