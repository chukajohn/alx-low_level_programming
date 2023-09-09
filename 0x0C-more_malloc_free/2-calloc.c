#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of array
 * @size: size of array
 * Return: pionter to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = calloc(nmemb, size);
	if (s == NULL)
		return (NULL);
	else
		return (s);
}
