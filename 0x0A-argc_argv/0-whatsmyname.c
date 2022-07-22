#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints its name.
 * @argc: Command Line Argument Count
 * @argv: Argument Vector
 *
 * Return: 0 - SUCCESS
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
