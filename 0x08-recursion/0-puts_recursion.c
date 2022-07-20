#include "main.h"

/**
 * _puts_recursion - A function that prints a string.
 * @s: Parameter containing the string to be printed.
 *
 * Return: Void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
