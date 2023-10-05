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
	int a, b, c;
	char *d, ref;

	d = s;

	while (s[b] != '\0')
	{
		b++;
	}
	for (c = 1; c < b; c++)
	{
		d++;
	}
	for (a = 0; a < (b / 2); a++)
	{
		ref = s[a];
		s[a] = *d;
		*d = ref;
		d--;
	}
}

