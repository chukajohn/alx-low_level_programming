#include "main.h"
/**
 *_pow - calc base to power
 *@base: base of the exponent
 *@power: power of the exponent
 *Return: value of
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 0;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - rints the binary representation of a number
 *@n: number to be printed
 *
 *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
		while (div != 0)
		{
			check = n & div;
			if (check == div)
			{
				flag = 1;
				_putchar('1');
			}
			else if (flag == 1 || div == 1)
			{
				_putchar('0');
			}
			div >>= 1;
		}
}
