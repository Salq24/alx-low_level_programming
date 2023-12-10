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
	
	int x = 0;

	char *st, *seperat = "";
	va_list list_arg;

	va_start(list_arg, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'f':
					printf("%s%f", seperat, va_arg(list_arg, double));
					break;
				case 'i':
					printf("%s%d", seperat, va_arg(list_arg, int));
					break;
				case 'c':
					printf("%s%c", seperat, va_arg(list_arg, int));
					break;
				case 's':
					st = va_arg(list_arg, char *);
					if (st == NULL)
						st = "(nil)";
					printf("%s%s", seperat, st);
					break;
				default:
					x++;
					continue;
			}
			seperat = ",";
			x++;
		}
	}
		printf("\n");
		va_end(list_arg);
}

