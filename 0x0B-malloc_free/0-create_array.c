#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and
 * initializes it with a specific char
 *
 * @size: array sixe
 * @c: specific char
 *
 * Return: Null if size = 0
 */

char *create_array(unsigned int size, char c)

{
	char *b
	unsigned int i;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}

	return (b);
}

