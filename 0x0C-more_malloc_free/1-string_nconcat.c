#include "main.h"
/**
 *string_nconcat - a function that concatenates two strings
 *@s1: first string
 *@s2: second string to be concat
 *@n: number of
 *Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *joined;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	joined = malloc(sizeof(char) * (s1len + n) + 1);
	if (joined == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			joined[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			joined[s1len + i] = s2[i];
		joined[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			joined[i] = s1[i];
		for (i = 0; i < n; i++)
			joined[s1len + i] = s2[i];
		joined[s1len + i] = '\0';
	}
	return (joined);


}
