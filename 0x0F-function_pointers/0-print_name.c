#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name
 * @name: The Name to be printed
 * @f: Function Pointer used to print the Name
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
