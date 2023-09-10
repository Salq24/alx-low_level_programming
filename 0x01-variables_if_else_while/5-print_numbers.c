#include <stdio.h>

/**
* main: Entry point
* description: This project requires us to print all
* single digit numbers, i.e , numbers less than 10,
* including zero. This can be done using for and while 
* loops. You can also use printf or putchar to carry
* it out. ASCII coding is required when you are using
* putchar because an interger is used in this case.
*The ASCII coding starts from 048 (which is 0). Then
* 049 (1) and on and on. Also includes alphabets.
*
*return : This is always 0 which means success
*/

int main(void)
{
	int n = 48;

	while(n < 58)
{
	putchar(n);
	if (n < 57)
{	putchar(44);
	putchar(32);
}
x++;
}
putchar('\n');

return (0);
}
