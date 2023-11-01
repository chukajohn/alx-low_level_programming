#include "main.h"
#include <stdlib.h>

/**
 *create_array - function that creates an array
 *@size: size of array
 *@c: character to be stored
 *Return: pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int j;

	if (size  == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		ar[j] = c;
	return (ar);
}
