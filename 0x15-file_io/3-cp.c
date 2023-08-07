#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *allocate_buffer(char *filename);
void close_descriptor(int file_descriptor);

/**
 * allocate_buffer - allocates memory for a buffer to store data
 * @filename: the name of the file for which the buffer is allocated
 *
 * Return: a pointer to the newly-allocated buffer
 */
char *allocate_buffer(char *filename)
{
	char *data_buffer;

	data_buffer = malloc(sizeof(char) * 1024);

	if (data_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (data_buffer);
}

/**
 * close_descriptor - close a file descriptor
 * @file_descriptor: the file descriptor to be closed
 */
void close_descriptor(int file_descriptor)
{
	int close_status;

	close_status = close(file_descriptor);

	if (close_status == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
			exit(100);
	}
}

/**
 * main - copy the contents of one file to another
 * @argc: number of command-line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 Success
 *
 * Description: Exits with specific codes for various errors:
 * Incorrect argument count: Exit code 97
 * Unable to read source file: Exit code 98
 * Unable to write to destination file: Exit code 99
 * Unable to close files: Exit code 100
 */
int main(int argc, char *argv[])
{
	int source_file_descriptor, dest_file_descriptor, read_bytes, write_bytes;
	char *data_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	data_buffer = allocate_buffer(argv[2]);
	source_file_descriptor = open(argv[1], O_RDONLY);
	read_bytes = read(source_file_descriptor, data_buffer, 1024);
	dest_file_descriptor = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_file_descriptor == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(data_buffer);
			exit(98);
		}

		write_bytes = write(dest_file_descriptor, data_buffer, read_bytes);
		if (dest_file_descriptor == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(data_buffer);
			exit(99);
		}

		read_bytes = read(source_file_descriptor, data_buffer, 1024);
		dest_file_descriptor = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(data_buffer);
	close_descriptor(source_file_descriptor);
	close_descriptor(dest_file_descriptor);

	return (0);
}
