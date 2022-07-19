#include "main.h"
#include <stdio.h>

/**
 * set_string - A function that sets the value of a pointer to a character
 * @s: A Double Pointer containing the address to be set to
 * @to: The parameter to be set with
 *
 * Return: Void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
