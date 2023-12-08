#include "main.h"

/**
 * main - Copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, other values on failure
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, read_result, write_result;
	char buffer[1024];

	/* Check if the number of arguments is correct */
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	/* Open the source file for reading */
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	/* Open the destination file for writing, create if it doesn't exist, truncate if it does */
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99);
	}

	/* Read from source and write to destination using a buffer */
	do
	{
		read_result = read(fd_from, buffer, 1024);
		if (read_result == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}

		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}

	} while (read_result > 0);

	/* Close the file descriptors */
	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

