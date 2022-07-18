#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: The Square matrix of integers
 * @size: Size of the Matrix
 *
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	unsigned int sum, no = size + 1, no1 = size * (size - 1), sum1;
	int i = 1;

	sum = a[0];
	sum1 = a[no1];

	while (i < size)
	{
		sum += a[no];
		no += size + 1;
		i++;
	}

	i = 0;
	while (i < size)
	{
		no1 -= size - 1;
		sum1 += a[no1];
		i++;
	}

	printf("%u, %u\n", sum, sum1);
}
