#include "main.h"

/**
 * factorial - a function that returns the factoril of a number
 * @n: nunber to be checked
 * Return: -1 when n is less than 0
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
