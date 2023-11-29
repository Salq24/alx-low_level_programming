#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of the array
 *
 * @array: array
 * @size: array size
 * @action: ppointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
