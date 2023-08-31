#include "main.h"

/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: parameter
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
		j++;
		j += _strlen_recursion(s + 1);
	}

	return (j);
}
