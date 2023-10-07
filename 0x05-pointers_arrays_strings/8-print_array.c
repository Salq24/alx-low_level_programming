#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * of integers, followed by a new line, seperated
 * by a comma, followed by a space
 *
 * @a: integers array
 * @n: num of elements
 * Return: Array
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
		{
		printf(", ");
		}
	}
	printf("\n");
}

