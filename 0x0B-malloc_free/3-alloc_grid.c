#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array of integers
 * @width: columns
 * @height: rows
 * Return: Pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(width * sizeof(int));

		if (*(grid + i) == 0)
		{
			for (k = 0; k <= i; k++)
				free(*(grid + k));
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);

}
