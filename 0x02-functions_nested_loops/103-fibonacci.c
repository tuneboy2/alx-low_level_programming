#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 - SUCCESS
 */

int main(void)
{
	long int res = 1, no1 = 1, no2 = 1, sum;

	while (res < 4000000)
	{
		res = no1 + no2;
		no2 = no1;
		no1 = res;

		if (res % 2 == 0)
		{
			sum += res;
		}
	}

	printf("%ld\n", sum);
	return (0);
}
