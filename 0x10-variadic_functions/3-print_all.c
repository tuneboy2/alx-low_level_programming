#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_gap(int current_no, int size);

/**
 * print_all - Write a function that prints Integers, Characters
 * Floats and Strings.
 * @format: This is a list of types of arguments passed to the function
 *
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int count = 0, i = 0;

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			case 'i':
			case 's':
			case 'f':
				count += 1;
		}
		i++;
	}

	va_start(arg, format);

	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			{
				int ch = va_arg(arg, int);

				putchar(ch);
				print_gap(i, count);
				break;
			}
			case 's':
			{
				char *str = va_arg(arg, char *);

				if (str == NULL)
				{
					printf("(nil)");
					print_gap(i, count);
					break;
				}

				printf("%s", str);
				print_gap(i, count);
				break;
			}
			case 'i':
			{
				int no = va_arg(arg, int);

				printf("%d", no);
				print_gap(i, count);
				break;
			}
			case 'f':
			{
				float num;

				num = va_arg(arg, double);
				printf("%f", num);
				print_gap(i, count);
				break;
			}
		}

		i++;
	}

	putchar(10);
	va_end(arg);
}

/**
 * print_gap - prints a comma followed by a space
 * @current_no: The current number of the count
 * @size: The size of the arguments
 *
 * Return: void
 */

void print_gap(int current_no, int size)
{
	if (current_no < size)
		printf(", ");
}
