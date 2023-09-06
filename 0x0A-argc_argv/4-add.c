#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: parameter
 * @argv: parameter
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int j, k;
	int sum = 0;
	char *n;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; argv[j]; j++)
	{
		k = strtol(argv[j], &n, 10);
		if (*n)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum += k;
		}
	}
	printf("%d\n", sum);

	return (0);

}
