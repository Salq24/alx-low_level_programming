#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - the returned pointer should point to
 * a newly allocated space in memory which contains
 * the contents of s1 , followed by the content of s2
 * and null terminated
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: c0oncat
 */

char *str_concat(char *s1, char *s2)

{
	int cnts1, cnts2, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (cnts1 = 0; s1[cnts1]; cnts1++)
		;
	for (cnts2 = 0; s2[cnts2]; cnts2++)
		;

	i = cnts1 + cnts2 + 1;

	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		j < cnts1 ? (s[j] = s1[j]) : (s[j] = s2[j - cnts1]);
	return (s);
}

