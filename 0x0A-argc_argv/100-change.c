#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: parameter
 * @argv: parameter
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, l, answer;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	answer = 0;

	if (i < 0)
	{
		printf("0\n");

		return (0);
	}

	for (l = 0; l < 5 && i >= 0; l++)
	{
		while (i >= values[l])
		{
			answer++;
			i -= values[l];
		}
	}

	printf("%d\n", answer);

	return (0);
}
