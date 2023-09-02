#include "main.h"
/**
 * _strncpy - Write a function that copies a string.
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0 ; a < n && src[a] != '\0' ; a++)
		dest[a] = src[a];

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
