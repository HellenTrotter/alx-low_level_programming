#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: parameter
 * Return: 0 (success)
 */

void puts_half(char *str)
{
	int a, b, c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	b = (c - 1) / 2;

	for (a = (b + 1) ; a < c ; a++)
	{
		_putchar(str[a]);
	}

	 _putchar('\n');
}
