#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all -  a function that prints anything.
 * @format: formats to beused
 * Return: 0
 *
 */

void print_all(const char * const format, ...)
{
	int i, arg;

	char *str;
	va_list spy;

	va_start(spy, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spy, int));
				arg = 0;
				break;
			case 'f':
				printf("%f", va_arg(spy, double));
				arg = 0;
				break;
			case 'c':
				printf("%c", va_arg(spy, int));
				arg = 0;
				break;
			case 's':
				str = va_arg(spy, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				arg = 1;
				break;
		}
		if (format[i + 1] != '\0' && arg != 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spy);
}
