#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lower case 10 times
*
* Return: returns 0 alwsys when is sucessful
*/

void print_alphabet_x10(void)
{
	int i;
	char f;

	for (i = 0; i < 10; i++)
	{
		for (f = 'a'; f <= 'z'; f++)

			_putchar(f);
	}

	_putchar('\n');
}
