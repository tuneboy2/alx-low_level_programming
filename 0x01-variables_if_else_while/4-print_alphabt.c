#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabets except q and e
 * Return: 0 - SUCCESS
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}

		alpha++;
	}

	putchar(10);
	return (0);
}
