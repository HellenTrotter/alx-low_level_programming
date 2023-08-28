#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination memory are
 * @src: source memory area
 * @n: parameter
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		src[j] = n;

	return (dest);
}
