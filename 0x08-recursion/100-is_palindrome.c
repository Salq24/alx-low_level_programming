#include "main.h"
#include <stdio.h>


/**
 * _strlen - returns string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * checks - checks for is_palidrone
 * @s: string
 * @len: string length
 * @cnt: string count
 * Return: 1 if true, else, 0
 */

int checks(char *str, int len, int cnt)
{
	if (cnt >= len)
		return (1);
	if (str[cnt] == str[len])
		return (checks(str, len - 1, cnt + 1));
	return (0);
}

/**
 * is_palindrome - checks if the words of a string
 * reads the same backwards or forward
 *
 * @s: string
 * Return: 1 if true, else, 0
 */

int is_palindrome(char *s)

{
	int len = _strlen(s);
	int cnt = 0;

	return (checks(s, len - 1, cnt));
}

