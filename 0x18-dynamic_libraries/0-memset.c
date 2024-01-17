#include "main.h"

/**
* _memset -  a function that fills memory with a constant byte
* @s: area to fill with bytes
* @b: constant  bytes
* @n: number of bytes
* Return: always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
