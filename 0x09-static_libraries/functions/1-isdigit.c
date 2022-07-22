#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit
 * @c: Parameter to be considered
 *
 * Return: 0 - SUCCESS
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
