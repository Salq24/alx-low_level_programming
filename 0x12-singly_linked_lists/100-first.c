#include "lists.h"
#include <stdio.h>

void printl(void)__attribute__ ((constructor));

/**
 * printl - prints before the main
 * function is executed
 */

void printl(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
