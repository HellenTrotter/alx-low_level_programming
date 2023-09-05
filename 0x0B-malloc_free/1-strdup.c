#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string given as a parameter.
 * @str: parameter
 * Return: 0 (success)
 */

char *_strdup(char *str)
{

	char *dup;
	int j = 0, k = 1;

	if (str == NULL)
		return (NULL);

	while (str[k])
	{
		k++;
	}

	dup = malloc((sizeof(char) * j) + 1);

	if (dup == NULL)
		return (NULL);

	while (j < k)
	{
		dup[j] = str[j];
		j++;
	}

	dup[j] = '\0';

	return (dup);
}
