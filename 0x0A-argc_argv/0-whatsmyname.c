#include <stdio.h>
#include "main.h"


/**
 * main - prints its own name,
 * followed by a new line
 *
 * @argv: array
 * @argc: arg count
 * Return: its own name
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

