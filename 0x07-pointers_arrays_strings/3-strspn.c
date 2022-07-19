#include "main.h"
#include <stdio.h>

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: Parameter 1
 * @accept: Parameter 2
 *
 * Return: An Unsigned Integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0, stop;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				stop = 1;
			}

			else
				stop = 0;
		}

		if (stop == 1)
			count += 1;

		else
			break;
	}

	return (count);
}
