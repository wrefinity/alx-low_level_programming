#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a 2-dimensional array of integers.
 * @grid: defines grid to be freed.
 * @height: defines the height of grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
