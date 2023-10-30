#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters);

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: parameter
 * @letters: parameter
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	char *buffer;
	ssize_t read_bytes;
	ssize_t written_bytes;

	if (filename == NULL)
	{
		return (0);
	}

	d = open(filename, O_RDONLY);

	if (d == -1)
	{
		return (0);
	}

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(d);
		return (0);
	}

	read_bytes = read(d, buffer, letters);

	if (read_bytes == -1)
	{
		close(d);
		free(buffer);
		return (0);
	}

	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (written_bytes == -1 || (size_t)written_bytes != (size_t)read_bytes)
	{
		close(d);
		free(buffer);
		return (0);
	}

	close(d);
	free(buffer);

	return (written_bytes);
}
