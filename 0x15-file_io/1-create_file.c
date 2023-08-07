#include "main.h"

/**
 * create_file - generate a file and write data to it
 * @filename: pointer to the name of the file to be generated
 * @text_content: pointer to a string containing data to be written
 *
 * Return: -1 if the operation fails, otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, text_length = 0;

	/* check if the file name is NULL */
	if (filename == NULL)
		return (-1);

	/* calculate the length of the data content */
	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*write the data content to the file */
	write_result = write(file_descriptor, text_content, text_length);
	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
