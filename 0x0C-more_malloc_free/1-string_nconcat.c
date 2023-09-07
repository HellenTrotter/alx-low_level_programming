#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int j, k, l;

	if (s1 == NULL)
		j = 0;

	else
	{
		for (j = 0; s1[j] != '\0'; j++)
			;
	}
	if (s2 == NULL)
		k = 0;

	else
	{
		for (k = 0; s2[k] != '\0'; k++)
			;
	}


	if (k > n)
		k = n;

	s = malloc(sizeof(char) * (j + k + 1));
	if (s == NULL)
		return (NULL);

	for (l = 0; l < j; l++)
		s[l] = s1[l];

	for (l = 0; l < k; l++)
		s[l + j] = s2[l];
	s[j + k] = '\0';

	return (s);
}
