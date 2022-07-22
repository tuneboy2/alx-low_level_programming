#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: Command Line Argument Count
 * @argv: Argument Vector
 *
 * Return: 0 - SUCCESS
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	else
	{
		printf("Error\n");
		return (1);
	}

	exit(EXIT_SUCCESS);
}
