#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the address of the integer
 * @index: index value to be set to 1
 *
 * Return: An integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	int s;

	for (i = 0; i <= index;  i++)
	{
		s = n[i];
		printf("%du\n", s);
	}

	return (-1);
}
