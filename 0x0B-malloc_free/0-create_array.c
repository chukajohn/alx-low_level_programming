#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @c: parameter that stores the character string
 * @size: an input fot the size of the array
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);

	}
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
