#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of multiplication, followed by a new
 * line.
 * @argv: argument array
 * @argc: argument count
 * Return: error if only one argument
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}