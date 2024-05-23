#include "search_algos.h"

/**
 * m_min - returns the minimum of two num
 * @one: first value
 * @two: second value
 *
 * Return: `one` if lower or equal to `two`,else, `two`
 */
size_t m_min(size_t one, size_t two)
{
	if (one <= two)
		return (one);
	else
		return(two);
}


/**
 * binary_search - searches for a value in a sortedarray of int
 * using binary search alg
 *
 * @array: pointer to first elem of the array
 * @size: num of elem in the array
 * @value: value
 * Return: array
 */

int m_binary_search(int *array, size_t one, size_t two, int value)
{
	size_t x, y;
	
	if (!array)
	{
		return (-1);
	}

	while (one <= two)
	{
		x = (one + two) / 2;
		printf("Searching in array: ");
		for (y = one; y <= two; y++)
			printf("%i%s", array[y], y == two ? "\n" : ", ");

		if (array[x] < value)
			one = x + 1;
		else if (array[x] > value)
		{
			two = x - 1;
		}
		else
		{
			return ((int)x); 
		}
	}
	return (-1);
}

/**
 * exponential_search - searches for a val in a sorted rray
 * of ints using the exponential search alg
 *
 * @array: pointer to the first elem
 * @size: size of the array
 * @value: value
 * Return: array
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t x, y, z = 1;

	if (!array || size == 0)
		return (-1);

	while (z < size && array[z] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", z, array[z]);
		z = z * 2;
	}
	x = z / 2;
	y = m_min(z, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", x, y);
	return (m_binary_search(array, value, x, y));
}
			
