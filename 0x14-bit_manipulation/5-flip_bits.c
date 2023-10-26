#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: parameter
 * @m: parameter
 * Return: number of bits you would need to flip to get from one number
 * to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int i = 0;

	while (result > 0)
	{
		if (result & 1)
		{
			i++;
		}

		result >>= 1;
	}

	return (i);
}
