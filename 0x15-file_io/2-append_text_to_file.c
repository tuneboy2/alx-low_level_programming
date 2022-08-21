#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the file
 * @text_content: pointer to text to be appended
 *
 * Return: An integer
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	while (text_content[length] != '\0')
		length++;

	write(fd, text_content, length);

	close(fd);

	return (1);
}
