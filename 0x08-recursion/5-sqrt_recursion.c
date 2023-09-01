#include "main.h"

/**
 * sqrt_g - function for the sqaure root
 * @a: parameters
 * @b: iterator
 * _sqrt_recursion - a function that returns a natural root of a number
 * Return: always 0
 */

int sqrt_g(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > 4)
	{
		return (-1);
	}
	return (sqrt_g(a, b + 1));
}

int _sqrt_recursion(int n)
{
	return (sqrt_g(n, 0));
}
