#include "variadic_functions.h"
/**
 * print_all -  function that prints anything
 * @format: parameter
 * Return: 0 (success)
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *s = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
					j++;
					continue;
			}
			s = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(list);
}
