#include "main.h"
#include <stdio.h>

/**
* leet - a function that encodex a string into 1337
* @s: string to be encoded
* Return: always 0 on success
*/

char *leet(char *s)
{
	int i;
	int j;
	char *b = "aAeEoOtTlL";
	char *c = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == b[j])
				s[i] = c[j];
		}
	}
	return (s);
}
