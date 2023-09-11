#include <stdio.h>
/**
*main - entry point
*
*Description - This project deals with writing alphabeth
* in lowercase. Only putchar is allowed here.
* You can use a for loop here or a while loop
* I will use a while loop in this project.
*
*Return: always 0 (success)
*/
int main(void)
{
char lower, upper;

lower = 'a';
upper = 'A';

while (lower <= 'z')
{
	putchar(lower);
	lower++;
}

while (upper <= 'Z')
{
	putchar(upper);
	upper++;
}

putchar('\n');
return (0);
}
