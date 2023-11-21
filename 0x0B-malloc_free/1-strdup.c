#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter
 *
 * @str: string
 * Return: duplicated string
 */

char *_strdup(char *str)

{
	int i = 1, x = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);

	if (p == NULL)
		return (NULL);

	while (x < i)
	{
		p[x] = str[x];
		x++;
	}
		p[x] = '\0';
		return (p);
}



