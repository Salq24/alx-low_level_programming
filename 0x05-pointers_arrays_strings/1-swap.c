#include "main.h"

/**
 * swap_int - swaps the values of
 * two integers
 *
 * @a: integer one
 *
 * @b: integer 2
 *
 * Return: Int
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
