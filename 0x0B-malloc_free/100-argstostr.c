#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *e;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}

		c = 0;
		b++;

	}
	e = malloc((sizeof(char) * a) + ac + 1);

	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			e[d] = av[b][c];
			d++;
			c++;

		}

		e[d] = '\n';

		c = 0;
		d++;
		b++;
	}
	d++;
	e[d] = '\0';
	return (e);
}
