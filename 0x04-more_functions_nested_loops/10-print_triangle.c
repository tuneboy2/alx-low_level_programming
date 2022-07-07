#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle
 * @size: Parameter to determine the size of the triangle
 *
 * Return: 0 - SUCCESS
 */

void print_triangle(int size)
{
	int count = 1, no, new_size;

	if (size > 0)
	{
		while (count <= size)
		{
			no = 1;
			new_size = size - count;
			while (no <= new_size)
			{
				_putchar(' ');
				no++;
			}

			while (new_size < size)
			{
				_putchar('#');
				new_size++;
			}

			_putchar(10);
			count++;
		}
	}

	else
		_putchar(10);
}
