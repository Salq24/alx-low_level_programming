#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings followed
 * by a new line
 *
 * @separator: what tobe printed btw str
 * @n: num of str
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *st;

	va_list str_array;

	va_start(str_array, n);

	for (x = 0; x < n; x++)
	{
		st = va_arg(str_array, char *);

		if (st == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str_array);
}

