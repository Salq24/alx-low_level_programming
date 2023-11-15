#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural sqrt of a number
 *
 * @n: number
 *
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)

{
	int sqrt = n * n;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (n);

	return (_sqrt_recursion(n, n + 1));
}

