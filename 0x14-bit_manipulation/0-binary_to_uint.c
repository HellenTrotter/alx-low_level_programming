#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 or 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			j = j << 1;
		}
		else if (b[i] == '1')
		{
			j = (j << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (j);
}
