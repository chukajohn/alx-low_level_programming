#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - that returns the sum of all its parameters.
 *@n: number of argument
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + (va_arg(arg, const unsigned int));
	}
	va_end(arg);
	return (sum);
}
