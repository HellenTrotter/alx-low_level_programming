#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: charectar
 * Return: 1 (true) 0 (false)
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{

		return (1);
	}


	else if (c >= 'a' && c <= 'z')
	{
		return (0);

	}
	return (0);
}
