#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a specified number of letters
 * from a text file to STDOUT
 * @filename: The name of the text file to be read
 * @letters: The number of letters to be read
 * Return: The actual number of bytes read and printed,
 * or 0 on failure or if FILENAME is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor;
	/* file descriptor for the open file */
	char *buffer;
	/*buffer to temporarily hold read data */
	ssize_t bytes_read;
	/* number of bytes read from the file */
	ssize_t bytes_written;
	/* number of bytes written to STDOUT */

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/*allocate memory for the buffer to hold the read data */
	buffer = malloc(sizeof(char) * letters);

	/* read data from the file into the buffer */
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	/*free the allocated memory for the buffer */
	free(buffer);

	/* close the file descriptor */
	close(file_descriptor);

	return (bytes_written);
}
