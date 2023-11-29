#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: num of elements in the array
 * @cmp: pointer to the function
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);
				x++;
			}
		}
	}
	return (-1);
}

