#include "search_algos.h"

size_t min(size_t x, size_t y);
/**
 * min - gives the min of 2 val
 * @x: val 1
 * @y: val 2
 * Return: min
 */

size_t min(size_t x, size_t y)
{
	return (x <= y ? x : y);
}

/**
 * jump_search - searches for a val in a sorted array
 * of ints using jump search alg
 *
 * @array: pointer 2 d first elem
 * @size: num of elem
 * @value: value
 *
 * Return: array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t high, low, step;

	if (!array || size == 0)
	{
		return (-1);
	}
	step = sqrt(size);

	for (high = 0; high < size && array[high] < value; low = high,
	     high += step)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
