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
	int a = 0;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
