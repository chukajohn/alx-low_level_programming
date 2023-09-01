#include "main.h"
/**
 * prime_g - a function for  prime number
 * @e: parameters for the conditions
 * @f: parameters for the conditions
 *  Return: always 0
 */
int prime_g(int e, int f)
{

	if (e <= 1 || (e != f && e % f == 0))
	{
		return (0);
	}
	else if (e == f)
	{
		return (1);
	}

	return (prime_g(e, f + 1));
}

/**
 * is_prime_number - function that returns 1 if the int is a prime
 * @n: input prameters to be passed
 * Return: return value of 0
 */

int is_prime_number(int n)
{
	return (prime_g(n, 2));
}
