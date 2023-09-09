#include <stdio.h>

/**
* main : entry point
* Description : This project deals with writing alphabeth
* in lowercase. Only putchar is allowed here.
* You can use a for loop here or a while loop
* I will use a while loop in this project.
*return: always 0 (success)
*/
int main(void)
{
/*First, declare a variable and init it*/

char alphabeth = 'a';

while (alphabeth <= 'z')
{
	putchar(alphabeth);
	alphabeth++;
}

putchar('\n');
return (0);
}
