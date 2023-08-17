#include "main.h"
/**
 * print_times_tables -  prints the n times table, starting with 0.
 * @n: parameter
 * Return: 0 (success)
 */

void print_times_table(int n)

{
	int i; j; r

	if (n >= 0 && <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				r = i * j;

				if (r <= 99)
					_putchar(' ');

				if (r <= 9)
					_putchar(' ');

				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
				}

				else if (r >= 10 && r <= 99)
				{
					_putchar((r % 10) + '0');
				}

				_putchar((r / 10) + '0');

			}
		}	_putchar('\n');
	}
}
