#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints an intege
 * @n: a parameter
 * Return: void
 *
 *
 */

void print_number(int n)
{
	unsigned int m;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
	{
	print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
