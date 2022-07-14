#include "main.h"

/**
 * _strncat - Concatenates two strings with respect to a given number.
 * @dest: Parameter 1
 * @src: Parameter containing string to be added to Parameter 1
 * @n: Number controlling length of string to be added.
 *
 * Return: A pointer to a Character.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && j < n; i++, j++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
