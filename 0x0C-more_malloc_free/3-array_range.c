#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: max int
 * Return: array
 */

int *array_range(int min, int max)
{
	int *p, x = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (p == NULL)
		return (NULL);
	while (max >= min)
	{
		p[x] = min;
		x++;
		min++;
	}
	return (p);
}

