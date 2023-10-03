#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: parameter
 * @letters: parameter
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t _written, _read;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	_read = read(f, buffer, letters);
	if (_read == -1)
	{
		close(f);
		free(buffer);
		return (0);
	}
	_written = write(STDOUT_FILENO, buffer, _read);
	if (_written == -1)
	{
		close(f);
		free(buffer);
		return (0);
	}
	close(f);
	free(buffer);
	return (_read);
}
