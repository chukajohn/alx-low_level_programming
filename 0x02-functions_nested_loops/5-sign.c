#include "main.h"
/**
* print_sign -  a function that prints the sign of a number
* @n: a parameter that will be checked
* Return: 1, 0 and -0  if n is greater than 0, or = 0 or , < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
