#include "main.h"

/**
 * puts2 - A function that prints the first character and every other character
 * @str: Parameter to be considered
 *
 * Return: Void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);

		i++;
	}

	_putchar(10);
}
