#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints single digits
 * Return: 0 - SUCCESS
 */

int main(void)
{
	int no = 0;

	while (no < 10)
	{
		printf("%d", no);
		no++;
	}

	putchar(10);
	return (0);
}
