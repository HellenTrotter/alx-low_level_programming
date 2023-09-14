#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: parameter
 * Return: 0 (success)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum = 0;
	 
	 va_list list;
	 
	 if (n  == 0)
		 return (0);

	va_start(list, n);

	for (j = 0; j < n; j++)
		sum += va_arg(list, const unsigned int);

	va_end(list);

	return (sum);
}
