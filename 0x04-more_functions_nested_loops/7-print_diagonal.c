#include "main.h"

/**
* print_diagonal - a function that draws a diagonal line on the terminal
* @n: is the number of times the character
* Return: always 0
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	else
	{
		int i, k;

		for (i = 0; i < n; i++)
		{
			for (k = 0; k <= i; k++)
				_putchar(' ');
			_putchar('\\');
			 _putchar('\n');

		}
	}

}
