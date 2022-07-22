#include "main.h"

/**
 * _strncpy - A function that copies a string with respect to a given number.
 * @dest: Parameter 1
 * @src: Parameter 2
 * @n: Parameter 3
 *
 * Return: A pointer to a Character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0, count = 0;

	while (src[j] != '\0')
	{
		j++;
		count++;
	}

	for (i = 0, j = 0; i < n; i++, j++)
	{
		if (i < count)
			dest[i] = src[j];

		else
			dest[i] = 0;
	}

	return (dest);
}
