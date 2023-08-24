#include "main.h"
/**
 * reverse_array - Write a function that reverses the content of
 * an array of integers.
 * @a: parameter
 * @n: parameter
 * Return: 0 (success)
 */

void reverse_array(int *a, int n)
{
	int b;
	int k;

	for (k = n - 1; k >= n / 2; k--)
	{
		b = a[n - 1 - k];
		a[n - 1 - k] = a[k];
		a[k] = b;
	}
}
