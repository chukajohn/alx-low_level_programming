#include "main.h"

/**
* rev_string - a function that reverses a string
* @s: string to be reversed
* Return: void
*/

void rev_string(char *s)
{
	int i;
	int counting = 0;

	for (i = 0; s[i] != '\0'; i++)
		counting++;

	for (i = 0; i < counting / 2; i++)
	{
		char k;

		k = s[i];
		s[i] = s[counting - 1 - i];
		s[counting - 1 - i] = k;
	}

}
