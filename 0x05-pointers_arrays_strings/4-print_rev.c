#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: parameter
 * Return: 0 (success)
 */
void print_rev(char *s)
{
	int a;

	int b = 0;

	for (a = 0 ; s[a] != '\0'; a++)
	{
		b++;
	}

	for (a = b - 1 ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');

}
