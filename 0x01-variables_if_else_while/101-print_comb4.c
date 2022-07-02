#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no1 = 0, no2, no3;

	while (no1 < 10)
	{
		no2 = no1 + 1;
		while (no2 < 10)
		{
			no3 = no2 + 1;
			while (no3 < 10)
			{
				putchar(no1 + '0');
				putchar(no2 + '0');
				putchar(no3 + '0');

				if (no1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				no3++;
			}
			no2++;
		}
		no1++;
	}

	putchar(10);
	return (0);
}
