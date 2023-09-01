#include "main.h"
/**
 *_strlen_recursion -get the lenght of a string
 * @s:string
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - to compare string
 * @s: string
 * @lowest: the lowest
 * @highest: the highest
 * Return: alwas 0
 */

int compare_string(int *s, int lowest, int highest)
{
	if (*(s + lowest) == *(s + highest))
	{
	if (lowest == highest || lowest == highest + 1)
		return (1);
	return (0 + compare_string(s, lowest + 1, highest - 1));
	}
	return (0);
}



/**
 * is_palindrome - function that returns 1 if a string is plaindrome
 *
 * @s: pointer to the string
 * Return: 1 if a string is palindrome
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, strlen_recursion(s) - 1));
}
