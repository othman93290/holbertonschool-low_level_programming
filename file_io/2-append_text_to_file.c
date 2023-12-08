#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_result;
	size_t text_length = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open the file in append mode, create if doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	/* Check if text_content is NULL */
	if (text_content != NULL)
	{
		/* Calculate the length of the text_content */
		while (text_content[text_length] != '\0')
			text_length++;

		/* Write the text_content to the file */
		write_result = write(fd, text_content, text_length);
		if (write_result == -1 || (size_t)write_result != text_length)
		{
			/* Error writing to the file */
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	close(fd);
	return (1);
}

