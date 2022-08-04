#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters
 * @n: Stating the number of parameterd to be passed
 *
 * Return: An Integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum;

	va_start(add, n);

	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(add, int);

	va_end(add);
	return (sum);
}
