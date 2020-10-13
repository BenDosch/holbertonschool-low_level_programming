#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a 2d arry of ints initiliazed to 0
 * @height: lowest level array that contians arrays of size width
 * @width: inner arry that dctates the witdth of the grid
 * Return: pointer to 2d array, NULL on fialure or if hight or width <= 0
 */

int **alloc_grid(int width, int height)
{
	int *grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height * width);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(grid + (i * width) + j) = 0;
	}
	return (grid);
}
