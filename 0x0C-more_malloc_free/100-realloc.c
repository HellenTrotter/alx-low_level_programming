#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using
 * malloc and free
 * @ptr: parameter
 * @old_size: parameter
 * @new_size: parameter
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		n = malloc(new_size);

	if (n == NULL)

	return (NULL);

	return (n);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	n = malloc(new_size);

	if (n == NULL)
		return (NULL);

	for (j = 0; j < old_size && j < new_size; j++)
	{
		n[j] = ((char *) ptr)[j];
	}

	free(ptr);
	return (n);

}
