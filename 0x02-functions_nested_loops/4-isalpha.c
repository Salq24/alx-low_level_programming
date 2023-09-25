#include "main.h"

/**
* _isalpha - checks for alphabetic character
*
*Return: 1 if c is alphabetic, else 0
*/

int _isalpha(int c)

{
	if ((c >= 65 && c < 91) || (c > 96 && c < 123))
	{
	return (1);
	}
	return (0);
}
