#include "main.h"

/**
 * _strlen - Returns the length of
 * a string
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)

	{
		a++;
	}
	return (a);
}

