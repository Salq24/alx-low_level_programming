#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * of integers
 * @width: width of array
 * @height: height of 2d array
 * Return: Pointer
 */

int **alloc_grid(int width, int height)

{
	int a, b;
	int **x;

	a = b = 0;

	if (height < 1)
		return (NULL);
	x = (int **)malloc(height * sizeof(x));
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		x[a] = malloc(width * sizeof(int));
		if (x[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(x[b]);
			free(x);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			x[a][b] = 0;
	}
	return (x);
}

