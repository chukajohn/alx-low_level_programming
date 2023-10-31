#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the mininum number of coin
 *@argc: number of command line arg
 *@argv: array that holds the command line arg
 *Return: 0 when successful
 *
 */

int main(int argc, char **argv)
{
	int conts, mncoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	conts = atoi(argv[1]);

	while (conts > 0)
	{
		if (conts >= 25)
			conts -= 25;
		if (conts >= 10)
			conts -= 10;
		if (conts >= 5)
			conts = 5;
		if (conts >= 2)
			conts -= 2;
		if (conts >= 1)
			conts -= 1;
			mncoin += 1;
	}
	printf("%d\n", mncoin);
	return (0);
}
