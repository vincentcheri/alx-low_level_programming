#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to an array of (int)s
 * @width: number of columns
 * @height: number of rows
 * Return: Null if height and width = 0
 */


int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			
			for (j = 0; j < i; j++)
			{
				free(grid[i]);
			}
			
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
