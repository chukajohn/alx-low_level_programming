#include "main.h"

/**
 *binary_to_uint - covaerts binary to an unsigned int
 *@b: binary to be converted
 *Return: 0
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int i, j, pow, result;
	int base;

	base = 2;
	pow = 1;
	result = 0;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && b[0] == '0' || b[0] == '1')
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
			pow = pow * base;
		result = result + (pow * (b[i] - 48));
			length--;
		pow = 1;
	}
	return (result);
}
