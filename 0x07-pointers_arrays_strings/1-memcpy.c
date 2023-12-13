#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: area1
 * @src: area2
 * @n: num of bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);

}

