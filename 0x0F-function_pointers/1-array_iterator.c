#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a
 * function given as a parameter on each element of an array.
 * @array: The Array to be Executed upon
 * @size: The Size of the Array Elements
 * @action: The Function Pointer to be called
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
