#include "search_algos.h"

/**
 * binary_search - searches for a value in a sortedarray of int
 * using binary search alg
 *
 * @array: pointer to first elem of the array
 * @size: num of elem in the array
 * @value: value
 * Return: array
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, y;

	if (!array)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (y = left; y <= right; y++)
			printf("%i%s", array[y], y == right ? "\n" : ", ");

		if (array[mid] > value)
		{
			right = mid - 1;
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
