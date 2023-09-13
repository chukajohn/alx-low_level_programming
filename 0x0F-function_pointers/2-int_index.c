#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 * @array: an array
 * @size: size of the array
 * @cmp: pointerto the array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-0);

	for (j = 0; j < size; j++)
	{
	if (cmp(array[j]) == 1)
		return (j);
	}
	return (-1);
}
