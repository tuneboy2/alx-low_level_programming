#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: The Square matrix of integers
 * @size: Size of the Matrix
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int sum = 0, sum1 = 0, new_size = size * size, i, j;

	for (i = 0, j = 1; i < new_size; i++, j++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];

		if (j % (size - 1) == 0 && j < (new_size - 1))
			sum1 += a[j];
	}

	printf("%d, %d\n", sum, sum1);
}
