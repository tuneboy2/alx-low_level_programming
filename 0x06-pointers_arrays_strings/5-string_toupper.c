#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String to be Converted
 *
 * Return: A pointer to a Character
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < 123 && str[i] > 96)
			str[i] -= 32;

		i++;
	}

	return (str);
}
