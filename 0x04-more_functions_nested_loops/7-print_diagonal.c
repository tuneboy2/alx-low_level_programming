#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 * @n: Parameter 1
 *
 * Return: 0 - SUCCESS
 */

void print_diagonal(int n)
{
	int count = 1, no;

	if (n > 0)
	{
		while (count <= n)
		{
			no = 1;
			while (no <= count)
			{
				if (no == count)
				{
					_putchar(92);
				}

				else
				{
					_putchar(' ');
				}
				no++;
			}
			count++;
			_putchar(10);
		}
	}

	else
		_putchar(10);
}
