#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - A function  that creates an array of
 * chars, and initializes it with a specific char.
 * @size: Size of the Array
 * @c: Character to be initialized with.
 *
 * Return: A pointer to a Character
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size > 0)
	{
		array = malloc(size * sizeof(char));

		if (array == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		return (array);
	}

	return (NULL);
}
