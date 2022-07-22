#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: Command Line Argument Count
 * @argv: Argument Vector
 *
 * Return: 0 - SUCCESS
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
