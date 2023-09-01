#include "main.h"
#include <stddef.h>
/**
 * _strchr -  a function that locates a character in a string
 * @c: character to be checked
 * @s: pointer to be accsessed
 * Return: always 0
 *
 *
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
