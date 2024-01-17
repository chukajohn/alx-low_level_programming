#include "main.h"

/**
 *_strpbrk -  a function that searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: bytes to be searched for
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		i++;
	}
	return ('\0');
}
