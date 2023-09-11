#include <stdio.h>

/**
*main - Write a program that prints all possible different
*combinations of two digits.
*
*Description - Numbers must be separated,followed by a space
* The two digits must be different
* 01 and 10 are considered the same combination
* Print only the smallest combination of two digits
* Numbers should be printed in ascending order, with two digits
* You can only use the putchar function (every other function
* (printf, puts, etc…) is forbidden)
* You can only use putchar five times maximum in your code
* You are not allowed to use any variable of type char
* All your code should be in the main function
* This project requires us to print all
* single digit numbers, i.e , numbers less than 10,
* including zero. This can be done using for and while
* loops. You can also use printf or putchar to carry
* it out. ASCII coding is required when you are using
* putchar because an interger is used in this case.
*The ASCII coding starts from 048 (which is 0). Then
* 049 (1) and on and on. Also includes alphabets.
*
*Return: This is always 0 which means success
*/

int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 9; dig1++)
{
	for (dig2 = dig1 + 1; dig2 < 10; dig2++)
{
	putchar((dig1 % 10) + '0');
	putchar((dig2 % 10) + '0');

	if (dig1 == 8 && dig2 == 9)
	continue;
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
