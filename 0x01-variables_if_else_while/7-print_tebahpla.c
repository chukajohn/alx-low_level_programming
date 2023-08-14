#include <stdio.h>
/**
* main - the main function
*
* Return: returns 0 when is sucess
*/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
