#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers,
 *@separator: a pointer
 *@n: number of variable
 *Return: 0
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

		if (i == (n - 1) && separator == NULL)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(arg);
}
