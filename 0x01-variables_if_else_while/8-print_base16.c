#include <stdio.h>
/**
* main - the main function
*
* Return: it always return 0 when is success
*/

int main(void)
{
	char i;

	int j;

	for (i = 0 ; i < 10 ; i++);

		putchar(i + '0');

	for (j = 'a' ; j <= 'f' ; j++);
		putchar(j);

	putchar ('\n');
	return (0);
}
