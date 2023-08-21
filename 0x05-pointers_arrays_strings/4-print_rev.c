#include "main.h"

/**
* print_rev - a function that prints a string, in reverse
* @s: parameter to be used
* Return: always 0
*/

void print_rev(char *s)
{
	int i;
	int counting;

	for (i = 0; s[i] != '\0'; i++)
		counting++;

	for (i = counting - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
	return (counting);
}
