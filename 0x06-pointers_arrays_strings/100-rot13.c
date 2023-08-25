#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: parameter
 * Return: s
 */

char *rot13(char *s)
{
	int a;
	int b;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0' ; a++)
	{
		for (b = 0 ; b < 52; b++)
		{
			if (s[a] == s1[b])
			{
				s[a] = s2[b];
				break;
			}
		}
	}
	return (s);
}
