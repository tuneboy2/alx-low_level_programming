#include "function_pointers.h"

/**
 * int_index - Write a function that returns the index
 * of the first element for which the cmp function does not return 0
 * @array: The array to be searched
 * @size: The number of array elements
 * @cmp: The function pointer used to compare
 *
 * Return: An Integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				ret = cmp(array[i]);

				if (ret != 0)
					return (i);
			}
		}
	}

	return (-1);
}
