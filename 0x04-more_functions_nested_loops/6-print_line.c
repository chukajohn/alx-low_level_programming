#include "main.h"

/**
* print_line - a function that draws a straight line in the terminal
* @n: number of times the character will  be printed
* Return: always 0
*/

void print_line(int n)
{
	if (n <= 0)

		_putchar('\n');
	else
	{
		int j;

		for (j = 1 ; j <= n; j++)

			_putchar('_');
		_putchar('\n');
	}
}
