#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * string_nconcat -  a function that concatenates two strings
 * @s1: string to be concanteneated
 * @s2: string to be concatenated
 * @n: number of bytes
 *  Return: 0
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int s1len = 0;
	int s2len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	s = malloc(sizeof(char) * (s1len + n) + 1);
	if (s == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)

			s[s1len + i] = s2[i];
		s[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (i = 0; i < n; i++)
			s[s1len + i] = s2[i];
		s[s1len + i] = '\0';
	}
		return (s);
}
