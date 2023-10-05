#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 *
 * @x: integer
 *
 * Return: number
 */

void print_number(int x)
{
	unsigned int y = x;

	if (x < 0)
	{
		x = x * -1;
		y = x;
		_putchar('-');
	}
	y = y / 10;

	if (y != 0)
		print_number(y);
	_putchar((unsigned int) x % 10 + '0');
}

