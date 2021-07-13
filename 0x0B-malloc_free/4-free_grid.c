#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees previously created grid from memory
 * @grid: double pointer to the multi-dimentional array (grid)
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
