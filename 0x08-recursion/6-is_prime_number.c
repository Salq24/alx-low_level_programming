#include "main.h"
#include <stdio.h>

/**
 * prime - Checks a number if it is a prime num
 * @n: number
 * @x: iteration
 * Return: void
 */
int prime(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1)
		return (0);

	if ((n / x) < x)
		return (1);

	return (prime(n, x + 1));
}

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, else, 0
 *
 * @n: input integer
 *
 * Return: 1 if true, else, 0
 */


int is_prime_number(int n)

{
	return (prime(n, 1));
}

