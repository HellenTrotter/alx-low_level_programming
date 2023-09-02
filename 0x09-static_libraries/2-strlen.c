#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: parameter
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
