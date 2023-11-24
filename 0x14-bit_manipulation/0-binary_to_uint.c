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
	int a;
	unsigned int len;

	len = 0;

	if (!b)
		return (0);
	for (a = 0; b[a] !=  '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		len <<= 1;
		if (b[a] == '1')
			len += 1;
	}
	return (len);
}
