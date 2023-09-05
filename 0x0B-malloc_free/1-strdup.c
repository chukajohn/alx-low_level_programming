#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * @str: string to be
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *cpy;
	int i;
	int counting = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		counting++;
	}

	cpy = malloc(sizeof(char) * counting + 1);

	if (cpy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];
	return (cpy);
}
