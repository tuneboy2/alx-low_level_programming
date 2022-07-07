#include "main.h"

/**
 * print_most_numbers - A function that prints the numbers, except 2 and 4
 *
 * Return: 0 - SUCCESS
 */

void print_most_numbers(void)
{
	int no = 0;

	while (no <= 9)
	{
		if (no != 2 && no != 4)
			_putchar(no + '0');

		no++;
	}

	_putchar(10);
}
