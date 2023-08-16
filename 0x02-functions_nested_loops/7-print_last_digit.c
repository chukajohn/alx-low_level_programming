#include "main.h"

/**
* print_last_digit - a function that prints the last digit of a number
*
* @i: the parameter
* Return: always 0 when is successful
*/

int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (j < 0)

		j = j *-i;
	_putchar(j + '0');
	return (j);
}
