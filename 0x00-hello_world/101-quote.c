#include <unistd.h>

/**
*main:Entry point
*description: Write a C program that prints exactly and
*that piece of art is useful" - Dora Korpar, 2015-10-19,
*followed by a new line, to the standard error.
*
*return: always 0 (success).
*/

int main(void)
/**
*main:You are not allowed to use any functions listed in the NAME
*section of the man (3) printf or man (3) puts
*Your program should return 1
*/

{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);

	return (1);
}
