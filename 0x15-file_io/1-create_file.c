#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int d;
	ssize_t written_bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	d = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (d == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		written_bytes = write(d, text_content, strlen(text_content));
		if (written_bytes == -1)
		{
			close(d);
			return (-1);
		}
	}

	close(d);
	return (1);
}
