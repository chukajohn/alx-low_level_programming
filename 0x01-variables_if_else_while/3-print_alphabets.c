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

	for (i = 'a'; i <= 'z'; 1++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar("%c\n");

	return (0);
}
