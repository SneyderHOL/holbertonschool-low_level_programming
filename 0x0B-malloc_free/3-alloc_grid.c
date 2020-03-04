#include "holberton.h"
#include <stdio.h>
/**
 *alloc_grid - return a pointer to a 2 dimensional array of integers.
 *
 *@width: integer argument
 *@height: integer argument
 *Return: char pointer
 */
int **alloc_grid(int width, int height)
{
	int **mat = NULL, a = 0, b = 0, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = malloc(height * sizeof(int *));
	if (!mat)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		mat[a] = (int *) malloc(width * sizeof(int));
		if (!mat[a])
		{
			for (c = 0; c < height; c++)
				free(mat[c]);
			free(mat);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			mat[a][b] = 0;
		}
	}
	return (mat);
}
