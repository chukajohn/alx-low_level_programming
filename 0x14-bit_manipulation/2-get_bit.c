#include "main.h"

/**
 *get_bit  - returns the value of abit at a given index
 *@n: number of index
 *@index: indxing
 *
 *Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	check = n & div;
	if (check == div)
		return (1);
	return (0);
}
