#include "main.h"

/**
*_abs - computes the absolute value of an integer
*@n: integer
*
*Return: Value or 0
*/

int _abs(int n)

{
	if (n < 0)
	{
	int val;

	val = n * -1;
	return (val);
	}
	return (n);
}
