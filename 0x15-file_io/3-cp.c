#include "main.h"

/**
 * error_file - Indicate if an error occurred
 * @file_from: check if error occurred from this function
 * @file_to: check if error occurred from this function
 * @argv: Command Line Argument
 *
 * Return: void
 */

void error_file(int file_from, int file_to, char *argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
}

/**
 * main - Write a program that copies the content of a file to another file.
 * @ac: Command Argument Count
 * @av: Pointers to Command Argument
 *
 * Return: An Integer
 */

int main(int ac, char **av)
{
	int file_from, file_to, nwr, nrd, err_close;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_file(file_from, file_to, *av);

	nrd = 1024;
	while (nrd == 1024)
	{
		nrd = read(file_from, buffer, 1024);
		error_file(nrd, 0, av[1]);

		nwr = write(file_to, buffer, nrd);
		error_file(0, nwr, av[2]);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
