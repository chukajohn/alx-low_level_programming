#include "function_pointers.h"

/**
 *print_name - function that prints name
 *@name: a variable name
 *@f: parameter
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
