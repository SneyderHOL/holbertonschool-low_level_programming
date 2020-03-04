#include "holberton.h"
/**
 *free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 *@grid: 2 dimensional integer array argument
 *@height: integer argument
 *
 */
void free_grid(int **grid, int height)
{
	int a = 0, b = 0;

	if (height <= 0)
		return;
	if (!grid)
		return;
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < 6; b++)
			free(grid[a] + b);
		free(grid + a);
	}
}
