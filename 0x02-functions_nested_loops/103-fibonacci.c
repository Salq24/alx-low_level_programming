#include <stdio.h>

/**
 * main - finds and prints the sum of even-value
 * terms, less than 4,000,000
 *
 * Return: value
 */

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sum = c;

	while (c + b < 4000000)
	{
	c = b + c;

	if (c % 2 == 0)
	sum += c;

	b = c - b;

	++a;
	}
	printf("%ld\n", sum);
	return (0);
}

