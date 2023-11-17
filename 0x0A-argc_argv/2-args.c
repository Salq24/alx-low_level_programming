#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments, including
 * the first one. One argument per line,
 * ending with a new line
 *
 * @argc: argument count
 * @argv: argument array
 * Return: argy\ument
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
