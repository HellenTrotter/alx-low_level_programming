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
	int k;
	int b;

	n = n - 1;
	b = 0;
	while (b <= n)
	{
		k = a[k];
		a[k++] = a[n];
		a[n--] = k;
	}
}
