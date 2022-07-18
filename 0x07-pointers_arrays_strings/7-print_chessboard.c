#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard.
 * @a: Parameter 1
 *
 * Return: Void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		for (j = 0; j <= 8; j++)
		{
			if (j == 8)
				_putchar(10);

			else
				_putchar(a[i][j]);
		}

		i++;
	}
}
