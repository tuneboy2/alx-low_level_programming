#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabets in lowercase
 * Return: 0 - SICCESS
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar(10);
	return (0);
}
