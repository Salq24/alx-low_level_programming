#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - print numbers followed by
 * a new line
 *
 * @separator: string to be printed btw numbers
 * @n: num of int passed
 * Return: num
 */

 void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, num;

	va_list array;

	va_start(array, n);

	for (x = 0; x < n; x++)
	{
		num  = va_arg(array, const unsigned int);
		printf("%d", num);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(array);
}
