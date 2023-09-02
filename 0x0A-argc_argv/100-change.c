#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the minimum number of coins to make change
 * @argc: argument couunt
 * @argv: argument vector
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int cent, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
			return (1);
	}
	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);

}
