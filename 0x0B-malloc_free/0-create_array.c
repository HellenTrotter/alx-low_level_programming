#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size: parameter
 * @c: parameter
 * Return: 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (j = 0; j < size; j++)
		arr[j] = c;

	return (arr);
}
