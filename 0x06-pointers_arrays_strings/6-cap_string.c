#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: String to be Capitalized
 *
 * Return: A pointer to a Character
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] < 123 && str[0] > 96)
			str[0] -= 32;

		if (str[i] == ' ' ||
		str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ','  ||
		str[i] == ';'  ||
		str[i] == '.'  ||
		str[i] == '!'  ||
		str[i] == '?'  ||
		str[i] == '"'  ||
		str[i] == '('  ||
		str[i] == ')'  ||
		str[i] == '{'  ||
		str[i] == '}'
		)
		{
			i++;
			if (str[i] < 123 && str[i] > 96)
				str[i] -= 32;
			i--;
		}
		i++;
	}

	return (str);
}

