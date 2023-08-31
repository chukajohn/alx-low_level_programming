#include "main.h"

/**
 * _strlen_recursion - a function that return a lenght of a string
 * @s: string that its lenght will be checked
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
