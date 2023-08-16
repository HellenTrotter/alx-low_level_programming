#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @i: parameter
 * Return: b (success)
 */
int print_last_digit(int i)
{
	int b;

	b = i % 10;
	if (i < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
