#include "main.h"

/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
* Return: always 0
*/

void print_most_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
		if (k != 2 && k != 4)
			_putchar(k + '0');
	}
	_putchar('\n');
}
