#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string
 *
 * Return: Void
 */
void rev_string(char *s)

{
	int length = 0, ind = 0;
	char tmp;

	while (s[ind++])
		length++;

	for (ind = length - 1; ind >= length / 2; ind--)
	{
	tmp = s[ind];
	s[ind] = s[length - index -1];
	s[length - ind -1] = tmp;
	}
}


