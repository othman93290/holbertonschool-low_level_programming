#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (bytes_read);
}

