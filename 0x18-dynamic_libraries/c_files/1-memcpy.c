#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: The memory area to be copied to.
 * @src: The memory area to be copied.
 * @n: The size of the memory area to be copied.
 *
 * Return: A pointer to a Character.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
