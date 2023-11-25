#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 *Return: 0 if big endies
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
