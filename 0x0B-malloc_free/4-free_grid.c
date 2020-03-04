#include "holberton.h"
#include <stdio.h>
/**
 *free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 *@grid: 2 dimensional integer array argument
 *@height: integer argument
 *
 */
void free_grid(int **grid, int height)
{
	int **mat = NULL, a = 0, b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = malloc(height * sizeof(int *));
	if (mat == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		mat[a] = (int *) malloc(width * sizeof(int));
		if (mat[a] == NULL)
			return (NULL);
		for (b = 0; b < width; b++)
		{
			mat[a][b] = 0;
		}

	}

	return (mat);
}
