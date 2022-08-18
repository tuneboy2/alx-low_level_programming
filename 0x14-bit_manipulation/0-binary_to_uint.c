#include "main.h"
#include <stdio.h>

/**
 * _pow - return an integer raised to the power of y
 * @x: Integer to be raised
 * @y: power value to be raised with
 *
 * Return: Integer
 */

unsigned int _pow(int x, int y)
{
	if (y == 0)
		return (1);

	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer containing the binary string
 *
 * Return: An unsigned integer
 */

unsigned int binary_to_uint(char *b)
{
	int i, length = 0, count;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	while (b[length] != '\0')
		length++;

	for (i = 0, count = length; i < count; i++, length--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);

		if (b[i] == 49)
			sum += _pow(2, length - 1);
	}

	return (sum);
}
