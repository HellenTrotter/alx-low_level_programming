#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: parameter
 * Return: binary representation of a number
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int l;


	for (i = 63; i >= 0; i--)
	{
		l = n >> i;

		if (l & 1)
		{
			_putchar('1');
			j++;
		}
		else if (l)
		{
			_putchar('0');
		}
	}
	if (!l)
	{
		_putchar('0');
	}


}
