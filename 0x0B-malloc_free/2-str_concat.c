#include "main.h"

/**
 *str_concat - function that concat 2strings
 *@s1: string to be concatenated
 *@s2: strinv to be concatenated
 *Return: 0 when sucesseful
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i, pan;
	char *tem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	tem = malloc(sizeof(char) * (len1 + len2 + 1));

	if (tem == NULL)
	{
		free(tem);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		tem[i] = s1[i];

	}
	for (pan = 0; pan <= len2; pan++)
	{
		tem[i] = s2[pan];
		i++;
	}
	return (tem);
}
