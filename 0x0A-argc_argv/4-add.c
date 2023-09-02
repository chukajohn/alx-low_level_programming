#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, addition = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)

		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi(argv[a]);
	}
	printf("%d\n", addition);
	return (0);
}
