#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int count = 0;
	double res = 1, no1 = 1, no2 = 1;

	while (count < 98)
	{
		printf("%.0f", res);
		res = no1 + no2;
		no2 = no1;
		no1 = res;

		if (count != 97)
		{
			printf(", ");
		}

		count++;
	}

	putchar(10);
	return (0);
}
