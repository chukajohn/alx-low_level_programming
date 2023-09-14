#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: a pointer that prints number
 * @n: number of argumnets
 * Return: 0
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, ar;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		ar = va_arg(arg, const unsigned int);
		printf("%d", ar);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
