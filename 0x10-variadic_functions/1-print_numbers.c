#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: parameter
 * @n: parameter
 * Return: 0 (success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j, num;

	va_list list;

	va_start(list, n);


	for (j = 0; j < n; j++)
	{
		num = va_arg(list, const unsigned int);
		printf("%d", num);


	if (j != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
