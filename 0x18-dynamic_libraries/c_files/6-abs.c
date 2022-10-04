#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @n: The integer to be considered
 *
 * Return: 0 - SUCCEES
 */

int _abs(int n)
{
	int res;

	if (n >= 0)
		res = n;

	else if (n < 0)
		res = (-1 * n);

return (res);
}
