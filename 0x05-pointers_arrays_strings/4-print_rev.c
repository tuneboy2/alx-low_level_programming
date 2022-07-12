#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse.
 * @s: Parameter containing string to be printed.
 *
 * Return: Void
 */

void print_rev(char *s)
{
	while (*s != '\0')
		s++;

	s--;
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}

	_putchar(10);
}
