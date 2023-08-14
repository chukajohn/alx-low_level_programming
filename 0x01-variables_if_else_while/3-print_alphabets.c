#include <stdio.h>
#include <time.h>
/**
* main - is the function
*
* Return:  always 0 when is successful
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
