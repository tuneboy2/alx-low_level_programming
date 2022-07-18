#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: The memory area pointed to by s, which is to be filled.
 * @b: The character used to fill the memory area
 * @n: The number of memory area to be filled.
 *
 * Return: A pointer to a Character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
