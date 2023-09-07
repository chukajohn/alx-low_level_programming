#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: string to be concatented
 * @s2: string to bre contatenated
 *  Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int j;
	char *out;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		s1len++;
	}

	for (j = 0; s2[j]  = '\0'; j++)
	{
		s2len++;
	}

	out = malloc(sizeof(char) * (s1len + s2len + 1));

	if (out == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
	{
		out[j] = s1[j];
}
	for (j = 0; s2[j] != '\0'; j++)
		out[s1len + j] = s2[j];
	return (out);
}
