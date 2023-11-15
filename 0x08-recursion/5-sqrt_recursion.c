#include "main.h"
#include <stdio.h>

/**
*_sqrt - calculates the sqrt of a num
*@n: number to be calculated
*@x : iteration
*Return: square root
*/

int _sqrt(int n, int x)

{
	int sqr = x * x;

	if (sqr > n)
		return (-1);

	if (sqr == n)
		return (x);

	return (_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural sqrt of a number
 * @n: number
 *
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)

{
	return (_sqrt(1, n));
}


