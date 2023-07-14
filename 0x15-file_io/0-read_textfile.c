#include "main.h"

/**
 * read_textfile - This function read a text file and print it to POSIX stdout
 * @filename: Is the name of the file to print
 * @letters: Is the number of letters in that file
 * Return: The actual number of letters read and printed from the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	/* Allocate a buffer to store the text read from the file */
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	/* Open the file using O_RDONLY flag or free buf if it can't be opened */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{/* Read letter bytes from file into the buffer or free buf on fail */
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[bytes_read] = '\0'; /* add null character on end of each buffer */

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{/* Write the read text to the stdout or free and close on fail*/
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_read);
}
