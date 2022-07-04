#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all possible combinations of two two-digit numbers.
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no1 = 0, no2;

	while (no1 < 100)
	{
		no2 = 1;
		while (no2 < 100)
		{
			if (no1 < no2)
			{	
				putchar(no1 / 10+ '0');
				putchar((no1 % 10) + '0');
				putchar(' ');
				putchar(no2 / 10+ '0');
				putchar((no2 % 10) + '0');

			if (no1 < 98)
			{
				putchar(',');
				putchar(' ');
			}
			}

			no2++;
		}

		no1++;;
	}

	putchar(10);
	return (0);
}
