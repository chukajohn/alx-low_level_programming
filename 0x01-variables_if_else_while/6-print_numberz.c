#include <stdio.h>

/**
* main - the main function
*
* Return: 0 when is sucess
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
