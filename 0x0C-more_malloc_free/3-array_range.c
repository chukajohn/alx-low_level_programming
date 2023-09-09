#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  a function that creates an array of integers
 * @min: minimuim number an integer
 * @max: maximiuin number of an interger
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *s;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		s[i] = min++;
	return (s);


}
