#include "main.h"

/**
 * print_square - Write a function that prints a square
 * @size: Parameter to determine the size
 *
 * Return: 0 - SUCCESS
 */

void print_square(int size)
{
	int count = 0, no;

	if (size > 0)
	{
		while (count < size)
		{
			no = 0;
			while (no < size)
			{
				_putchar('#');
				no++;
			}
			_putchar(10);
			count++;
		}
	}

	else
		_putchar(10);
}
