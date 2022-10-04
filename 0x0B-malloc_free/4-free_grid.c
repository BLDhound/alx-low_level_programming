#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2D grid,
 * previously created by alloc_grid function
 * @grid: grid to free
 * @height: number of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}

