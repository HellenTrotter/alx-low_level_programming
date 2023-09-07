#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: parameter
 * @max: parameter
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int j, l;

	if (min > max)
		return (NULL);

	l = max - min + 1;

	ptr = malloc(sizeof(int) * l);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		ptr[j] = min++;

	return (ptr);

}
