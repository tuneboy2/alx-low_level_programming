#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - A function that creates a copy of a
 * String and returns a Pointer to its First Address
 * @str: The String to be Copied
 *
 * Return: A Pointer to a Character
 */

char *_strdup(char *str)
{
	int i = 0, count = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	array = malloc(count * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
		array[i] = str[i];

	return (array);
}
