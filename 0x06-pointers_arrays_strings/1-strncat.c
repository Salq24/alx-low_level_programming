#include "main.h"

/**
 * _strncat - concats two strings, using
 * at most, n-bytes from src.
 *@n: number
 * @dest: destination string
 * @src: source string
 * Return: concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	int lend = 0, x = 0;

	while (dest[lend])
	{
		lend++;
	}

	while (x < n && src[x])
	{
		dest[lend] = src[x];
		lend++;
		x++;
	}

	dest[lend + n + 1] = '\0';
	return (dest);
}

