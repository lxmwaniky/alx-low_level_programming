#include "main.h"

/**
 * free_grid - Deallocates memory for a 2D array
 * @grid: Pointer
 * @height: Height
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
	grid = NULL;
}
