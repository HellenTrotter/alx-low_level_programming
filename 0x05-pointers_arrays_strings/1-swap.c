#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: parameter
 * @b: parameter
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
