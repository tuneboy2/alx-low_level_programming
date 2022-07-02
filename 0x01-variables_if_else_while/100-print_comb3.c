#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no1 = 0, no2 = 1;

	while (no1 < 10)
	{
		no2 = 1;
		while (no2 < 10)
		{
			if (no1 < no2)
			{
				putchar(no1 + '0');
				putchar(no2 + '0');
			}
			if (no1 != 8 && no1 < no2)
			{
				putchar(',');
				putchar(' ');
			}
			no2++;
		}
		no1++;
	}
	putchar(10);
	return (0);
}
