#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - return the sum of all
 * parameters
 * @n: number of args
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)

{
	unsigned int x;
	unsigned int num_sum;

	va_list numbers;

	va_start(numbers, n);

	for (x = 0; x < n; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			num_sum += va_arg(numbers, const unsigned int);
		}
	}
	va_end(numbers);
	return (num_sum);
}

