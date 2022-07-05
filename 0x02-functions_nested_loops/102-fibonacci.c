#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int count = 0;
	long int no1 = 1, res = 1, no2 = 1;

	while (count < 50)
	{
		printf("%ld", res);

		if (count != 49)
		{
			printf(", ");
		}

		res = no1 + no2;
		no2 = no1;
		no1 = res;

		count++;
	}

	putchar(10);
	return (0);
}
