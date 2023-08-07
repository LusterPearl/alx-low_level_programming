#include "main.h"

/**
 * append_text_to_file - append specified text to the end of a file
 * @filename: a pointer to the name of the target file
 * @text_content: the string to be added to the end of the file
 *
 * Return: -1 if the function fails or filename is null
 * -1 if the file doesn't exist or the user lacks write permission
 *  otherwise, return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, text_length = 0;

	/* check if the filename is NULL */
	if (filename == NULL)
		return (-1);

	/* calculates the length of the additional text content */
	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}

	/*open the file for writing in append mode */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	write_result = write(file_descriptor, text_content, text_length);

	/*check for error during file opening or writing */
	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
