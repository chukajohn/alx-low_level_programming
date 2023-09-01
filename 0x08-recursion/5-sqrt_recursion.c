#include "main.h"

/**
 * sqrt_g - function for the sqaure root
 * @a: parameters
 * @b: iterator
 * Return: always 0
 */

int sqrt_g(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_g(a, b + 1));
}


/**
 * _sqrt_recursion - a function that returns square root
 * @n: parameter to be passed
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	return (sqrt_g(n, 0));
}
