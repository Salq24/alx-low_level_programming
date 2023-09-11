#include <stdio.h>
/**
*main - Print all numbers of base 16 in lower case.
*
*Description - This project deals with printing all numbers
*of base 16 in lowercase. To get base 16 numbers, use %x.
*%X prints them in uppercase letters. Putchar is also a
*requirement here and we can also use printf.
*
*Return: Always 0 , meaning success
*/

int main(void)
{
int n = 0;

while (n < 48)
{
	if (n < 10)
	putchar(n + '0');
	else if (n > 41)
	putchar(n - 10 + 'A');
	n++;
}
putchar(10);

return (0);
}
