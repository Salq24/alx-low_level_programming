#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural sqrt of a number
 *@x: iteration
 * @n: number
 *
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)

{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (x);

	return (_sqrt_recursion(n, x + 1));
}

