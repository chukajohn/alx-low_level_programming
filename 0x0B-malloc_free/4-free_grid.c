#include "main.h"

/**
 *free_grid - free 2 dimensional grid
 *@grid: multidimensional grid
 *@height: height of the grid
 *Return: 0 always on success
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
