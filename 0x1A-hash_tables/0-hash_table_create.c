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

	new_hash = malloc(size * sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);

	return (new_hash);
}
