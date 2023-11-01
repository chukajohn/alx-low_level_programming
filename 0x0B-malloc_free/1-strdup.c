#include "main.h"

/**
 *_strdup - funtion that returns a pointer
 *@str: the string
 *
 *Return: a pointer
 */
char *_strdup(char *str)
{
	size_t i, k;
	char *strd;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
		strd = (char *)malloc(sizeof(char) * (i + 1));
	if (strd == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		strd[k] = str[k];
	}
	return (strd);
}
