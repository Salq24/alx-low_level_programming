#include "main.h"
#include <stdio.h>

/**
 * _strcat - concats two strings
 *
 * @dest: destination string
 * @src: source string
 * Return: string
 */

char *_strcat(char *dest, char *src)

{
	int lend = 0, x;

	while (dest[lend])
	{
	lend++;
	}
	for (x = 0; src[x] != 0; x++)
	{
	dest[lend] = src[x];
	lend++;
	}

	dest[lend] = '\0';
	return(dest);
}

