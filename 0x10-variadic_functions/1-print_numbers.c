#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 * @separator: The string to be inserted
 * @n: The number of arguments passed
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	putchar(10);
	va_end(num);
}
