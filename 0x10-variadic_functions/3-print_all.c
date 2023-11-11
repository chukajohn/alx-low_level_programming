#include "variadic_functions.h"
/**
 *print_all - function that prints anything
 *@format: format
 *Return: 0
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;
	char *str;

	va_list arp;

	va_start(arp, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(arp, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(arp, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(arp, int));
				check_stat = 0;
				break;
			case 's':
				printf("%s", va_arg(arp, char *));
				if (str == NULL)
					str = "nil";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;

		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arp);
}
