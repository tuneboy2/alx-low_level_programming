#include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 - SUCCESS
 */

void more_numbers(void)
{
	int count = 0, no;

	while (count < 10)
	{
		no = 0;
		while (no < 15)
		{
			if (no > 9)
			{
				_putchar(no / 10 + '0');
			}
			_putchar(no % 10 + '0');
			no++;
		}
		_putchar(10);
		count++;
	}
}
