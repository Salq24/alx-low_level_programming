#include "main.h"

/**
*print_last_digit - prints the last digit of a num
*
*@x: the number
*Return: The last digit of x
*/

int print_last_digit(int x)
{
	int last_dig;

	last_dig = x % 10;

	if (last_dig < 0)
	{

	last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');

	return (last_dig);
}
