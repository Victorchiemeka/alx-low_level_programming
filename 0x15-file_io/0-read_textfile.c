#include "main.h"
/**
 * read_textfile - function that read a text file and print it to POSIX stdout
 * @filename: the name of the file to be printed
 * @letters: the number of the text in the file
 * Return: the number of numbers and letter read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fs, read_byte, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_byte = read(fd, buffer, letters);
	if (bytes_reads == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[read_byte] = '\0';

	written_bytes = write(STDOUT_FILENO, buffer, read_byte);
	if (written_bytes == -1 || written_bytes != read_byte)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (bytes_read);
}
