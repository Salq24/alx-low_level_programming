#include "main.h"
/**
 * puts_half - prints half of a string,
 * followed by a new line
 *
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
	a++;
	}
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b = b + 1;
	}
	else
	{
	b = a / 2;
	}
	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}

