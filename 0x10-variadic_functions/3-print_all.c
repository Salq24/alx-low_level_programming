#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_all - function that prints anything
 * @format: types of args
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x, status;

	char *st;
	va_list list_arg;

	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'f':
				printf("%f", va_arg(list_arg, double));
				status = 0;
				break;
			case 'i':
				printf("%d", va_arg(list_arg, int));
				status = 0;
				break;
			case 'c':
				printf("%c", va_arg(list_arg, int));
				status = 0;
				break;
			case 's':
				st = va_arg(list_arg, char *);
				if (st == NULL)
					st = "(nil)";
				printf("%s", st);
				break;
			default:
				status = 1;
				break;
		}
		if (format[x + 1] != '\0' && status == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(list_arg);
}

