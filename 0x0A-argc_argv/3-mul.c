#include <stdio.h>
#include <stdlib.h>
/**
 *main - programe that multiply two num
 *@argc: a variable to be multiplied
 *@argv: a variable to be multiplied
 *Return: always 0 on sucess
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
