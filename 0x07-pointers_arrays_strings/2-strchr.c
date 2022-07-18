#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: The string to be considered
 * @c: The character to be located
 *
 * Return: A pointer to a Character
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);

		i++;
	}

	return (NULL);
}
