#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: parameter
 * @m: parameter
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k = n ^ m;
	unsigned int l = 0;

	while (k > 0)
	{
		l += k & 1;
		k >>= 1;
	}
	return (l);
}
