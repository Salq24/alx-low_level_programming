#include "search_algos.h"

/**
 * interpolation_search - searches for a val in a sorted
 * array of int using interpolation search alg
 * @array: first elem pointer
 * @size: num of elem
 * @value: value
 *
 * Return: an array
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t x, y, z;

	if (!array)
		return (-1);

	for (x = 0, z = (size - 1); z >= x;)
	{
		y = x + (((double)(z - x) / (array[z] - array[x])) * (value - array[x]));
		if (y < size)
		{
			printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", y);
			break;
		}
		if (array[y] == value)
		{
			return (y);
		}
		if (array[y] > value)
			z = y - 1;
		else
			x = y + 1;
		}
	return (-1);
}


