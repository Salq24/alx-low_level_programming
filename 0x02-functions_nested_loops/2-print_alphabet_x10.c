#include "main.h"

/**
 * print_alphabet - prints alphabets in lower
 * case, followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char b;
	int x = 0;

	while (x <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	_putchar('\n');

	x++;
	}
}
