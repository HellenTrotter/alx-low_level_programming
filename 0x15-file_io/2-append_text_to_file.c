#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, _written, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	_written = write(f, text_content, l);

	if (f == -1 || _written == -1)
		return (-1);

	close(f);

	return (1);
}
