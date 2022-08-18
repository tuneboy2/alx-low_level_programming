#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to integer
 * @index: index value to be set to 0
 *
 * Return: An integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = ~(1 << index);
	*n = (*n & m);

	return (1);
}
