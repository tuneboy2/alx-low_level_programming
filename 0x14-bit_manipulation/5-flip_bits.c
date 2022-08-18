#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: Parameter 1
 * @m: Parameter 2
 *
 * Return: An integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, sum = 0;
	unsigned long int c;

	c = n ^ m;

	for (i = 0; i < 64; i++, c >>= 1)
	{
		if ((c & 1) == 1)
			sum += 1;
	}

	return (sum);
}
