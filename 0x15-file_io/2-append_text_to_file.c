#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d;
	int result;

	if (!filename)
	{
		return (-1);
	}

	d = open(filename, O_WRONLY | O_APPEND);

	if (d == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (result = 0; text_content[result]; result++)
			if (write(d,&text_content[result], 1) == -1)
			{
				close(d);
				return (-1);
			}
	}
	close(d);
	return (1);




}
