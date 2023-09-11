#include <stdio.h>

/**
*main - Print alphabet in reverse, followed by a new line
*
*Description - This project deals with printing alphabet in reverse,
*i.e, starting from z to a in lower case. Only putchar
*can be used for this. It is a project requirement. Printf
*works as well tho.
*
*Return: Always 0, shows success.
*
*/

int main(void)
{
char alphabet = 'z';

while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}

putchar('\n');

return (0);
}
