#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no = 0, res;

	while (no < 1024)
	{
		if (no % 3 == 0 || no % 5 == 0)
		{
			res += no;
		}

		no++;
	}

	printf("%d\n", res);
	return (0);
}
