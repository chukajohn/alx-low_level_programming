#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to a 2 dimensional array
 * @height: number of column
 * @width:  number of rows
 * Return: pointer to  array
 */

int **alloc_grid(int width, int height)
{
	int j;
	int  i;
	int **out;

	if (width <= 0 || height <= 0)
		return (NULL);

	out = malloc(sizeof(int *) * height);

	if (out == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		out[i] = malloc(sizeof(int) * width);

		if (out[i] == NULL)
		{
			free(out);
			for (j = 0; j <= height; j++)
			free(out[j]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			out[i][j] = 0;
	}
	return (out);
}
