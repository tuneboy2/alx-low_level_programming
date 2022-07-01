#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the digits
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no = 0;

	while (no < 10)
	{
		putchar(no + '0');
		no++;
	}

	putchar(10);
	return (0);
}
