#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: number of arguments thatwill be passed
 *
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum = sum + va_arg(arg, const unsigned int);
	}
	va_end(arg);
	return (sum);
}
