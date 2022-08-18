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
	return ((n >> index) & 1);
}
