#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - A function that prints all natural numbers to 98.
 * @n: Integer to be defined to 98
 *
 * Return: 0 - SUCCESS
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}

	else
	{
		while (n > 97)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
printf("\n");

}
