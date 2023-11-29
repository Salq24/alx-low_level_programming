#include "3-calc.h"
#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * main - main 
 * @argc: argument count
 * @argv: value of array
 * Return: void
 */

int main(int argc, char *argv[])

{
	int n1, n2;
	char *px;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	px = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(px) == NULL || px[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*px == '/' && n2 == 0) ||
			(*px == '%' && n2 == 0))
	{
		printf("Error\n");
			exit(100);
	}

	printf("%d\n", get_op_func(px)(n1, n2));
	return (0);
}

