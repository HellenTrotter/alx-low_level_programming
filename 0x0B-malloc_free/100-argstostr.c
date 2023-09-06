#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: parameter
 * @av: parameter
 * Return: 0 (success)
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	char *n;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (j < ac)
	{
		while (av[j][k])
		{
			i++;
			k++;
		}

		k = 0;
		j++;
	}
	n = malloc((sizeof(char) * i) + ac + 1);

	j = 0;
	while (av[j])
	{
		while (av[j][k])
		{
			n[l] = av[j][k];
			l++;
			k++;
		}
		n[l] = '\n';
		k = 0;
		l++;
		j++;
	}
	l++;
	n[l] = '\0';
	return (n);
}
