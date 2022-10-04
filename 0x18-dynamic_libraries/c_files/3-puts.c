#include "main.h"

/**
 * _puts - A function that prints a string.
 * @str: Parameter containing string to be printed.
 *
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar(10);
}

/**
 * _puts - A function that prints a string
 * void _puts(char *str)
 * {
 *	int i = 0;
 *
 *	while (str[i] != '\0';
 *	{
 *		_putchar(str[i]);
 *		i++;
 *	}
 *
 *	_putchar(10);
 * }
 */
