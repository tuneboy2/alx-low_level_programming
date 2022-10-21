#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assoviated with a key
 * @ht: the hash table
 * @key: key whose value is to be retrieved
 *
 * Return: The value if key is gound, or NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}

	return (NULL);
}
