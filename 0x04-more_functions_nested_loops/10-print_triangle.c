#include "main.h"

/**
* print_triangle - a function that prints a triangle, followed by a new line
* Return: always 0
*/

void print_triangle(int size)
{

	int i; j;

		if (size > 0)
{
	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('0');
		}
		if (i == size)

		_putchar('\n');
		}
	}	
	_putchar('\n')
}
