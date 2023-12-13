#include "main.h"

/**
 * _memset - fills memory with a
 * constant byte
 * @s: memory area
 * @b:constant byte
 * @n: no of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}

