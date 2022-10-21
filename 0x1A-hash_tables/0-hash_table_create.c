#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of thr array
 *
 * Return: Pointer to the new array, else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);

	new_hash->size = size;
	new_hash->array =  malloc(size * sizeof(hash_node_t *));
	if (!new_hash->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = NULL;
	}
	return (new_hash);
}
