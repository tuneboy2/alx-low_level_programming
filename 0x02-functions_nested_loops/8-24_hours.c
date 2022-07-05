#include "main.h"

/**
 * jack_bauer - A function that prints every minute of the day
 *
 * Return: 0 - SUCCESS
 */

void jack_bauer(void)
{
	int no1 = 0, no2;

	while (no1 < 24)
	{
		no2 = 0;
		while (no2 < 60)
		{
			_putchar(no1 / 10 + '0');
			_putchar(no1 % 10 + '0');
			_putchar(':');
			_putchar(no2 / 10 + '0');
			_putchar(no2 % 10 + '0');
			_putchar(10);
			no2++;
		}
		no1++;
	}
}
