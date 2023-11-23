#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a
 * memory block using malloc and free
 * @ptr: pointer to the memort previously allocated
 * with a call to malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	unsigned int x;
	char *s;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);
		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
		s[x] = ((char *) ptr)[x];
	}
	free(ptr);
	return (s);
}
