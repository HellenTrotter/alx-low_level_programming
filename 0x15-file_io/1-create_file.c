#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t _written;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		_written = write(f, text_content, strlen(text_content));

		if (_written == -1)
		{

			return (-1);
			close(f);
		}
	}

	close(f);
	return (1);

}
