#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: a string to be reversed
 * Return: always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
