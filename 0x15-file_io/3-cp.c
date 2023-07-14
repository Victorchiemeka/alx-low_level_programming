#include "main.h"

/**
 * allocate_buffer - This function allocates space to store the new file
 * @filename: Is the name of the new file
 * Return: A pointer to the allocated space
 */
char *allocate_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		/* If memory allocation fails */
		dprintf(STDERR_FILENO, "Error: Can't allocate buffer for %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file_descriptor - This function closes the file descriptor
 * @fd: Is the file descriptor
 * Return: void
 */
void close_file_descriptor(int fd)
{
	int result;

	result = close(fd);
	if (result == -1)
	{
		/* If closing file descriptor fails */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file_content - This function copies file content to another file
 * @source_file_descriptor: The file descriptor of the source file
 * @destination_file_descriptor: The file descriptor of the destination file
 * @buffer: The buffer to use for reading and writing
 * @file_from: The name of the source file
 * @file_to: The name of the destination file
 * Return: void
 */
void copy_file_content(int source_file_descriptor,
		int destination_file_descriptor, char *buffer,
		char *file_from, char *file_to)
{
	ssize_t read_size, write_size;

	do {
		/* Read the contents of the input file into the buffer */
		read_size = read(source_file_descriptor, buffer, BUFFER_SIZE);

		/* Check for read errors */
		if (source_file_descriptor == -1 || read_size == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}

		/* Write the contents of the buffer to the output file */
		write_size = write(destination_file_descriptor, buffer, read_size);

		/* Check for write errors */
		if (destination_file_descriptor == -1 || write_size == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}

		/* Open the output file in append mode */
		destination_file_descriptor = open(file_to, O_WRONLY | O_APPEND);
	} while (read_size > 0);
}

/**
 * main - Entry point of the program
 * @argc: Is the number of arguments
 * @argv: Is the argument vector(holding array of arguments)
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int source_file_descriptor, destination_file_descriptor;
	char *buffer;

	/* Check for correct argument count */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Allocate buffer for destination file */
	buffer = allocate_buffer(argv[2]);

	/* Open source file and read contents into buffer */
	source_file_descriptor = open(argv[1], O_RDONLY);

	/* Create destination file and write buffer contents to it */
	destination_file_descriptor = open(argv[2],
			O_CREAT | O_WRONLY | O_TRUNC, 0664);

	copy_file_content(source_file_descriptor,
			destination_file_descriptor, buffer, argv[1], argv[2]);
	/* Free buffer and close file descriptors */
	free(buffer);
	close_file_descriptor(source_file_descriptor);
	close_file_descriptor(destination_file_descriptor);

	return (0);
}
