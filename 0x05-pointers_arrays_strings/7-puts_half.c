#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: parameter
 * Return: 0 (success)
 */

void puts_half(char *str)
{
	int a, b, c = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
	{	c++;
	b = (c - 1) / 2;
	}

	for (a = b + 1 ; str[a] != '\0' ; a++)
	{
		_putchar(str[a]);
	}

	 _putchar('\n');
}
