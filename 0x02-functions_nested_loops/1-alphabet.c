#include "main.h"
/**
* print_alphabet - a function that prints the alphabet, in lowercase
*
* Return: always return 0 when the code nis successful
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

}
