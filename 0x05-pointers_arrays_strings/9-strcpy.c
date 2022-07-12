#include "main.h"

/**
 * _strcpy - A function that copies a string from src to desr
 * @dest: Parameter 1
 * @src: Parameter 2
 *
 * Return: A Character Pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
