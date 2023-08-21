#include "main.h"
/**
* puts_half - a function that prints half of a string, followed by a new line
* @str: a string to be printed half way
* Return: void
*/


void puts_half(char *str)
{
	int i, j;
	int count = 0;

	for (i = 0; str[i] != '\n'; i++)
		count++;
	j = (count - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)

			_putchar(str[i]);
		_putchar('\n');

}
