#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabets in reverse
 * Return: 0 - SUCCESS
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar(10);
	return (0);
}
