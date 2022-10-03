#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: Parameter 1
 * @src: Parameter 2
 *
 * Return: A pointer to a Character
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = ('\0');

	return (dest);
}
