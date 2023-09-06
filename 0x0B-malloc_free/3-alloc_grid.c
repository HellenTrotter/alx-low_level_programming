#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: parameter
 * @height: parameter
 * Return: 0 (success)
 */

int **alloc_grid(int width, int height)
{
	int j, k;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		a[j] = malloc(sizeof(int) * width);

		if (a[j] == NULL)
		{
			for (; j >= 0; j--)
				free(a[j]);

			free(a);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			a[j][k] = 0;
	}

	return (a);
}
