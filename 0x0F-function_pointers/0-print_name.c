#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - afunction that prints name
 * @name: parameter to store the name
 * @f: pointer function
 * Return: 0
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
