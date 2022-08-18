#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index of bit to be returned
 *
 * Return: An integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}

	return (-1);
}
