#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: parameter
 * @n: parameter
 * Return: 0 (success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *str;

	va_list list;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(list);
}
