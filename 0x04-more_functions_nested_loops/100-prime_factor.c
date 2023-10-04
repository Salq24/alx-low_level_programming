
#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor 
 * of the number 612852475143
 *
 * Return: number
 */

int main(void)
{
	long a, larpf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
		larpf = number / a;
		}
	}
		printf("%ld\n", larpf);
		return (0);
}
