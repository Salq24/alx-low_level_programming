#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * of a string to uppercase
 *@strn: string to be reversed
 * Return: changed string
 */

char *string_toupper(char *strn)

{
	int ind = 0;

	while (strn[ind])
	{
		if (strn[ind] >= 'a' && strn[ind] <= 'z')
			strn[ind] -= 32;
		ind++;
	}
	return (strn);
}

