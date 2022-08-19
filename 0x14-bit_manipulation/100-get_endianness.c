#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: An integer
 */

int get_endianness(void)
{
	unsigned int res, i = 0x02;
	char *a;

	/* char *a helps to get the first byte at yhe lowest memory */
	a = (char *)&i;

	/* if *a is ordered as 02 00 00 00 */
	if (*a == 2)
	{
		res = 1;
	}
	/* *a is ordered as 00 00 00 02 */
	else
	{
		res = 0;
	}

	return (res);
}
