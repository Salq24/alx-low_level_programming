#include "search_algos.h"

/**
 * linear_search - searches for a val in an array of
 * ints using linear search alg
 *
 * @array: pointer to the first elem
 * @size: num of elem in d array
 * @value: value of d array
 * Return: an array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (!array)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array [%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
