#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: The Integer Array
 * @n: The size of thr array.
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
