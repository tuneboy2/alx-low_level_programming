#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers of base 16 in lowercase
 * Return: 0 - SUCCESS
 */

int main(void)
{
	char alpha = 'a';
	int no = 0;

	while (no < 10)
	{
		putchar(no + '0');
		no++;
	}

	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}

	putchar(10);
	return (0);
}
