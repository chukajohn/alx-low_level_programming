#include "3-calc.h"
#include <stdio.h>
#include <stdlib>

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argc[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n"
			exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[1]);

	if (get_up_func(op) == NULL || op[1] != '\0')
	{
		prinf("Error\n");
		exit(100);
	}

	printf("%f\n", get_op_func(op)(num1, num2))

	return (0);
}
