#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array of lenght height
 * @grid: 2d array
 * @height: height of grid
 * Retrun: none
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
