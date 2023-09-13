#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as parameter
 * @array: araay
 * @size: size of the array
 * @action: pointer to the array
 * Return: 0
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}
