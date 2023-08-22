#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character
 * @str: parameter
 * Return: 0 (success)
 */

void puts2(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}

	}
	_putchar('\n');
}
