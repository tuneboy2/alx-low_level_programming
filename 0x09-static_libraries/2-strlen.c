#include "main.h"

/**
 * _strlen - Thid function returns the length of a string.
 * @s: Parameter containing the String
 *
 * Return: An Integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
