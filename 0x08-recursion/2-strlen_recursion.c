#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: Parameter containing the string
 *
 * Return: An Integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}
