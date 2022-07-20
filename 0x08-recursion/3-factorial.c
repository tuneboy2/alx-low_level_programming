#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: Parameter to be used.
 *
 * Return: An Integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
