#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concats all arguments of a program
 * @ac: argument count
 * @av: array
 * Return: concated value
 */

char *argstostr(int ac, char **av)

{
	int a = 0, b = 0, c = 0, d = 0;
	char *p;

	if (ac == 0)
		return (NULL);

	if (av == 0)
		return (NULL);
	a = b = c = d = 0;

	for (a = 0; av[a]; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
	}
	p = (char *)malloc(c * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (a = 0; av[a]; a++)
	{
		for (b = 0; av[a][b]; b++, d++)
			p[d] = av[a][b];
		p[d] = '\n';
		d++;
	}
	p[d] = '\0';
	return (p);
}

