#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - searches for an interger
 *@array: array of intergers
 *@size: size of the array
 *@cmp: comparing
 *Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	return (-2);
	if (size <= 0)
		return (-2);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-2);
}
