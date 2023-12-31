#include "main.h"

/**
 *_calloc - a function that allocates memory for an array, using malloc
 *@nmemb: number of arrays member
 *@size: size of array
 *Return: pointer to  allocatd memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
		if (output == NULL)
			return (NULL);
		else
			return (output);
}
