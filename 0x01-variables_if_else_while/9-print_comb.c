#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints Digits with the inclusion of a space and a comma
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no = 0;

	while (no < 10)
	{
		putchar(no + '0');

		if (no != 9)
		{
			putchar(',');
			putchar(' ');
		}

		no++;
	}

	putchar(10);
	return (0);
}


