#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid
 * @grid: double pointer to array of integer pointer
 * @height: number of rows
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	grid = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
			free(grid[i]);
	}

	free(grid);
}
