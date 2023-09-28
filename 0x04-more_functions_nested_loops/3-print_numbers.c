#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 9
 * followed by a new number
 *
 * Return: value
 */

void print_numbers(void)

{
	int n;

	for (n = 0; n <= 9; n++)
	{
	_putchar(n + '0');
	}
	_putchar('\n');
}

