#include "main.h"

/**
*string_toupper - a function that changes all lowercase letters of a string
*@s: string to be convertd
*Return: always 0
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
