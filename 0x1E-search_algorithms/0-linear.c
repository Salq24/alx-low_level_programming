#include "search_algos.h"

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
