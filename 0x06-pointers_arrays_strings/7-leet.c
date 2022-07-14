#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * @str: String to be encoded on.
 *
 * Return: A pointer to a Cahracter
 */

char *leet(char *str)
{
	int upper[] = {65, 69, 79, 84, 76};
	int lower[] = {97, 101, 111, 116, 108};
	int no[] = {52, 51, 48, 55, 49};
	int i = 0, j;

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == upper[j] || str[i] == lower[j])
			{
				str[i] = no[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}

