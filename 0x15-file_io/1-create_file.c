#include "main.h"

/**
 * create_file - Create a function that creates a file
 * @filename: pointer to the filename
 * @text_content: pointer to the text content
 *
 * Return: An Integer
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
