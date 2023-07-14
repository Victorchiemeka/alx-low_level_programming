#include "main.h"

/**
 * create_file - creates a file and writes a given text content to it
 * @filename: the name of the file to create
 * @text_content: the NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, res;

	/* Check if filename argument is NULL */
	if (filename == NULL)
		return (-1);

	/* Open file for writing, create if it doesn't exist, truncate if it does */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Check if text_content argument is NULL */
	if (text_content != NULL)
	{
		/* Calculate the length of the text content */
		while (text_content[len])
			len++;

		/* Write the text content to the file */
		res = write(fd, text_content, len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
