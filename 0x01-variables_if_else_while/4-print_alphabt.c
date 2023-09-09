#include <stdio.h>
/**
* main : entry point
* Description : This project deals with writing alphabet
* except e and q. Only putchar is allowed here.
* You can use a for loop here or a while loop
* I will use a while loop in this project.
*return: always 0 (success)
*/
int main(void)

{
char alphabet = 'a';

while (alphabet <= 'z')
{	if(alphabet != 'e' && alphabet != 'q')
        {
		putchar(alphabet);
	}
        alphabet++;
}
putchar('\n')
return (0);
}
