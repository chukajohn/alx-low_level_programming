#include "main.h"

/**
* swap_int -  a function that swaps the values of two integers
* @a: parameteres
* @b: parameters
* Return: always 0
*/

void swap_int(int *a, int *b)
{
	int i;

		i = *a;

	*a = *b;
	*b = i;
}
