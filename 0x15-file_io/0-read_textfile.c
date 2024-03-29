#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to text file
 * @letters: number of letters it should read and print
 *
 * Return: An integer of data tyoe ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, no;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	no = read(fd, buffer, letters);

	no = write(STDOUT_FILENO, buffer, no);

	free(buffer);

	close(fd);

	return (no);
}
