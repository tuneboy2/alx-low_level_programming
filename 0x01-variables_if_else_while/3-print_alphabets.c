#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabets in lowercase and then uppercase
 * Return: 0 - SUCCESS
 */

int main(void)
{
	char lower = 'a', upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar(10);
	return (0);
}
