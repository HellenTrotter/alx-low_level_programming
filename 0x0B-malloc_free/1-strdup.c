#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string given as a parameter.
 * @str: parameter
 * Return: 0 (success)
 */

char *_strdup(char *str)
{

	int j;
	char *dup;
	int add = 0;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		add++;

		dup = malloc(sizeof(char) * add + 1);
	}

	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		dup[j] = str[j];

	return (dup);
}
