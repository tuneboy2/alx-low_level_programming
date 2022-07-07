#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9
 *
 * Return: 0 - SUCCESS
 */

void print_numbers(void)
{
	int no = 0;

	while (no <= 9)
	{
		_putchar(no + '0');
		no++;
	}

	_putchar(10);
}
