#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: Parameter to determine length of line
 *
 * Return: 0 - SUCCESS
 */

void print_line(int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
	}

	_putchar(10);
}
