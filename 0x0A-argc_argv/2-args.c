#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: Command Line Argument Count
 * @argv: Argument Vector
 *
 * Return: 0 - SUCCESS
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	exit(EXIT_SUCCESS);
}
