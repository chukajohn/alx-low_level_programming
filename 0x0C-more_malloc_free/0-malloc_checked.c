#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: parameter to be checked
 *
 *Return: always 0 when successful
 *
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
