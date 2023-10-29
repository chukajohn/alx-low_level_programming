#include <stdio.h>
/**
 *main - funcrion tht prints all argument
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
