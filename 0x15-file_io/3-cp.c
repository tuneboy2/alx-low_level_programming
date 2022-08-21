#include "main.h"

/**
 * main - Write a program that copies the content of a file to another file.
 *
 * Return: An integer
 */

int main(int ac, char **av)
{
	int fd, fd1, no;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd1 = fd;

	no = read(fd, buffer, 1024);

	close(fd);
	if (fd == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd1);
		exit(100);
	}

	fd = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(2, "Can't write to %s\n", av[2]);
		exit(99);
	}

	fd1 = fd;
	write(fd, buffer, no);

	close(fd);
	if (fd == -1)
	{
		dprintf(2, "Can't close fd %d\n", fd1);
		exit(100);
	}

	return (0);
}
