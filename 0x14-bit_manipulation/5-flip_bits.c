#include "main.h"
/**
 *flip_bits - returns a num of bit
 *@n: number to set
 *@m: moe
 *
 *Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b;
	int count = 0;
	unsigned long int new, exxclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		new = exxclusive >> b;
		if (new & 1)
			count++;
	}
	return (count);
}
