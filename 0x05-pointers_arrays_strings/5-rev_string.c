#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: parameter
 * Return: 0 (success)
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		c++;
	for (a = 0 ; a < c / 2 ; a++)
	{
		b = s[a];
		s[a] = s[c - 1 - a];
		s[c - 1 - a] = b;
	}
}
