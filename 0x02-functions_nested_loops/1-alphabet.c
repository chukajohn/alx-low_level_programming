#include "main.h"
/**
* main - function that print alphabet in lower case
*
* Return: always return 0 when the code nis successful
* print_alphabet - a prototype function
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

}
