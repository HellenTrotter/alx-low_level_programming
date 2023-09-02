#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: pointer
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{

		char *n = haystack;
		char *j = needle;

		while (*n == *j && *j != '\0')
		{
			n++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (0);
}
