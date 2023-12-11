#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: parameter
 * Return: 0 (success)
 */

int _atoi(char *s)
{
	int i, a, b, len, c, digit;

	i = 0;
	a = 0;
	b = 0;
	len = 0;
	c = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && c == 0)
	{
		if (s[i] == '-')
			++a;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (a % 2)
				digit = -digit;
			b = b * 10 + digit;
			c = 0;
		}
		i++;
	}
	if (c == 0)
		return (0);
	return (b);
}
