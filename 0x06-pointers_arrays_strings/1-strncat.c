#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
		a++;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
