#include "main.h"
#include <string.h>

/**
 *array_range -  a function that creates an array of integers.
 *@min: minimium
 *@max: maximum
 *Return: arrays of interger
 *
 */

int *array_range(int min, int max)
{
	int *b, i = 0;

	if (min > max)
		return (NULL);

	b = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (b == NULL)
		return (NULL);

	while (min <= max)
	{
		b[i] = min;
		i++;
		min++;
	}
	return (b);


}
