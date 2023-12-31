#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: parameter
 * @index: parameter
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	j = 1UL << index;

	return ((n & j) ? 1 : 0);
}
