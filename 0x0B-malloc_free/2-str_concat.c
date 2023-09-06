#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: parameter
 * @s2: parameter
 * Return: 0 (success)
 */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int j, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	j = k = 0;

	while (s1[j] != '\0')
		j++;

	while (s2[k] != '\0')
		k++;
	pointer = malloc(sizeof(char) * (j + k + 1));

	if (pointer == NULL)
		return (NULL);

	j = k = 0;
	while (s1[j] != '\0')
	{
		pointer[j] = s1[j];
		j++;
	}

	while (s2[k] != '\0')
	{
		pointer[j] = s2[k];
		j++;
		k++;
	}

	pointer[j] = '\0';
	return (pointer);
}
