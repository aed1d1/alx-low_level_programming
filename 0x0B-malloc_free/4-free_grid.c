#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function
 * @grid: points to the 2 dimetional array
 * @height: is the number of rows of the array
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
