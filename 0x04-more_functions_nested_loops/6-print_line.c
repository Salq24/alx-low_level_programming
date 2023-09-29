#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @x: lines
 *
 * Return: a straight line
 */

void print_line(int x)

{
	int y;

	if (x <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (y = 0; y < x; y++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}

