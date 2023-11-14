#include <main.h>

/**
 * reverse_array - a function that
 * reverses the content of an array of integers
 *
 * @n: num of elements in the array
 * @a: array of int
 *
 * Return: reverse
 */

void reverse_array(int *a, int n)

{
	int tmp, ind;

	for (ind = n - 1; ind >= n / 2; ind--)
	{
		tmp = a[n - 1 - ind];
		a[n - 1 - ind] = a[ind];
		a[ind] = tmp;
	}
}

