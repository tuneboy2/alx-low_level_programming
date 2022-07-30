#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - A function that allocates memory
 * @b: The size of memory to be allocated
 *
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	int *size;

	size = malloc(b);
	if (size == NULL)
	{
		exit(98);
	}

	return (size);
}
