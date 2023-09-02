#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: parameter
 * @accept: parameter
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (s[i])
	{

		for (j = 0 ; accept[j] ; j++)
		{
			if (accept[j] == s[i])
			{
				i++;
				break;
			}
		}

		if (accept[j] == '\0')
			return (i);
	}
	return (i);

}
