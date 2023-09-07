#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: parameter
 * @size: parameter
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, k = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = nmemb * size;
	ptr = malloc(k);

	if  (ptr == NULL)
		return (NULL);

	while (i < k)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
