#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The parameter to be scanned
 * @accept: The parameter to be matched with
 *
 * Return: A pointer to a Character
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}
